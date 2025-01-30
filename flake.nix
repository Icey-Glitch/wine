{
  description = "A Nix-flake-based C/C++ development environment";
  
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    nix-vscode-extensions = {
      url = "github:nix-community/nix-vscode-extensions";
      inputs = {
        nixpkgs.follows = "nixpkgs";
        flake-utils.follows = "flake-utils";
      };
    };
  };

  outputs = { self, nixpkgs, flake-utils, nix-vscode-extensions }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs { inherit system; };
        inherit (pkgs) vscode-with-extensions vscodium;
        extensions = nix-vscode-extensions.extensions.${system};
        
        customVSCodium = pkgs.vscode-with-extensions.override {
          vscode = vscodium;
          vscodeExtensions = with extensions; [
            vscode-marketplace.llvm-vs-code-extensions.vscode-clangd
            vscode-marketplace-release.github.copilot
            vscode-marketplace-release.github.copilot-chat
            open-vsx.catppuccin.catppuccin-vsc
            open-vsx.jnoortheen.nix-ide
          ];
        };

        wine-dev = pkgs.wine64.overrideAttrs (oldAttrs: {
          src = self;
        });

        commonPackages = with pkgs; [
          customVSCodium
          clang-tools
          #linuxKernel.packages.linux_6_6.perf
          cmake
          meson
          ninja
          codespell
          conan
          cppcheck
          doxygen
          gtest
          lcov
          vcpkg
          vcpkg-tool
        ];

        systemSpecificPackages = if system == "aarch64-darwin" then [] else [ pkgs.gdb ];

      in
      {
        packages = {
          default = wine-dev;
          wine-dev = wine-dev;
        };

        devShells.default = pkgs.mkShell {
          name = "wine-dev";
          inputsFrom = wine-dev.buildInputs;
          packages = commonPackages;
        };
      });
}