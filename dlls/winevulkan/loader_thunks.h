/* Automatically generated from Vulkan vk.xml; DO NOT EDIT!
 *
 * This file is generated from Vulkan vk.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright 2015-2021 The Khronos Group Inc.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#ifndef __WINE_VULKAN_LOADER_THUNKS_H
#define __WINE_VULKAN_LOADER_THUNKS_H

struct unix_funcs
{
    NTSTATUS (WINAPI *p_vkAcquireNextImage2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkAcquireNextImageKHR)(void *args);
    NTSTATUS (WINAPI *p_vkAcquirePerformanceConfigurationINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkAcquireProfilingLockKHR)(void *args);
    NTSTATUS (WINAPI *p_vkAllocateCommandBuffers)(void *args);
    NTSTATUS (WINAPI *p_vkAllocateDescriptorSets)(void *args);
    NTSTATUS (WINAPI *p_vkAllocateMemory)(void *args);
    NTSTATUS (WINAPI *p_vkBeginCommandBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkBindAccelerationStructureMemoryNV)(void *args);
    NTSTATUS (WINAPI *p_vkBindBufferMemory)(void *args);
    NTSTATUS (WINAPI *p_vkBindBufferMemory2)(void *args);
    NTSTATUS (WINAPI *p_vkBindBufferMemory2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkBindImageMemory)(void *args);
    NTSTATUS (WINAPI *p_vkBindImageMemory2)(void *args);
    NTSTATUS (WINAPI *p_vkBindImageMemory2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkBuildAccelerationStructuresKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginConditionalRenderingEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginDebugUtilsLabelEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginQuery)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginQueryIndexedEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginRenderPass)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginRenderPass2)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginRenderPass2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginRenderingKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBeginTransformFeedbackEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindDescriptorSets)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindIndexBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindInvocationMaskHUAWEI)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindPipeline)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindPipelineShaderGroupNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindShadingRateImageNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindTransformFeedbackBuffersEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindVertexBuffers)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBindVertexBuffers2EXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBlitImage)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBlitImage2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBuildAccelerationStructureNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBuildAccelerationStructuresIndirectKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdBuildAccelerationStructuresKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdClearAttachments)(void *args);
    NTSTATUS (WINAPI *p_vkCmdClearColorImage)(void *args);
    NTSTATUS (WINAPI *p_vkCmdClearDepthStencilImage)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyAccelerationStructureKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyAccelerationStructureNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyAccelerationStructureToMemoryKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyBuffer2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyBufferToImage)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyBufferToImage2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyImage)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyImage2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyImageToBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyImageToBuffer2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyMemoryToAccelerationStructureKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCopyQueryPoolResults)(void *args);
    NTSTATUS (WINAPI *p_vkCmdCuLaunchKernelNVX)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDebugMarkerBeginEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDebugMarkerEndEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDebugMarkerInsertEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDispatch)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDispatchBase)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDispatchBaseKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDispatchIndirect)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDraw)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndexed)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndexedIndirect)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndexedIndirectCount)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndexedIndirectCountAMD)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndexedIndirectCountKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndirect)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndirectByteCountEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndirectCount)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndirectCountAMD)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawIndirectCountKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawMeshTasksIndirectCountNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawMeshTasksIndirectNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawMeshTasksNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawMultiEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdDrawMultiIndexedEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndConditionalRenderingEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndDebugUtilsLabelEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndQuery)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndQueryIndexedEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndRenderPass)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndRenderPass2)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndRenderPass2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndRenderingKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdEndTransformFeedbackEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdExecuteCommands)(void *args);
    NTSTATUS (WINAPI *p_vkCmdExecuteGeneratedCommandsNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdFillBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkCmdInsertDebugUtilsLabelEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdNextSubpass)(void *args);
    NTSTATUS (WINAPI *p_vkCmdNextSubpass2)(void *args);
    NTSTATUS (WINAPI *p_vkCmdNextSubpass2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdPipelineBarrier)(void *args);
    NTSTATUS (WINAPI *p_vkCmdPipelineBarrier2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdPreprocessGeneratedCommandsNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdPushConstants)(void *args);
    NTSTATUS (WINAPI *p_vkCmdPushDescriptorSetKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdPushDescriptorSetWithTemplateKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdResetEvent)(void *args);
    NTSTATUS (WINAPI *p_vkCmdResetEvent2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdResetQueryPool)(void *args);
    NTSTATUS (WINAPI *p_vkCmdResolveImage)(void *args);
    NTSTATUS (WINAPI *p_vkCmdResolveImage2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetBlendConstants)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetCheckpointNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetCoarseSampleOrderNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetColorWriteEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetCullModeEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDepthBias)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDepthBiasEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDepthBounds)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDepthBoundsTestEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDepthCompareOpEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDepthTestEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDepthWriteEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDeviceMask)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDeviceMaskKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetDiscardRectangleEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetEvent)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetEvent2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetExclusiveScissorNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetFragmentShadingRateEnumNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetFragmentShadingRateKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetFrontFaceEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetLineStippleEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetLineWidth)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetLogicOpEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetPatchControlPointsEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetPerformanceMarkerINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetPerformanceOverrideINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetPerformanceStreamMarkerINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetPrimitiveRestartEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetPrimitiveTopologyEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetRasterizerDiscardEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetRayTracingPipelineStackSizeKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetSampleLocationsEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetScissor)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetScissorWithCountEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetStencilCompareMask)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetStencilOpEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetStencilReference)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetStencilTestEnableEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetStencilWriteMask)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetVertexInputEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetViewport)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetViewportShadingRatePaletteNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetViewportWScalingNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSetViewportWithCountEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCmdSubpassShadingHUAWEI)(void *args);
    NTSTATUS (WINAPI *p_vkCmdTraceRaysIndirectKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdTraceRaysKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdTraceRaysNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdUpdateBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWaitEvents)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWaitEvents2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWriteAccelerationStructuresPropertiesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWriteAccelerationStructuresPropertiesNV)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWriteBufferMarker2AMD)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWriteBufferMarkerAMD)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWriteTimestamp)(void *args);
    NTSTATUS (WINAPI *p_vkCmdWriteTimestamp2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCompileDeferredNV)(void *args);
    NTSTATUS (WINAPI *p_vkCopyAccelerationStructureKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCopyAccelerationStructureToMemoryKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCopyMemoryToAccelerationStructureKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateAccelerationStructureKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateAccelerationStructureNV)(void *args);
    NTSTATUS (WINAPI *p_vkCreateBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkCreateBufferView)(void *args);
    NTSTATUS (WINAPI *p_vkCreateCommandPool)(void *args);
    NTSTATUS (WINAPI *p_vkCreateComputePipelines)(void *args);
    NTSTATUS (WINAPI *p_vkCreateCuFunctionNVX)(void *args);
    NTSTATUS (WINAPI *p_vkCreateCuModuleNVX)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDebugReportCallbackEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDebugUtilsMessengerEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDeferredOperationKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDescriptorPool)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDescriptorSetLayout)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDescriptorUpdateTemplate)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDescriptorUpdateTemplateKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateDevice)(void *args);
    NTSTATUS (WINAPI *p_vkCreateEvent)(void *args);
    NTSTATUS (WINAPI *p_vkCreateFence)(void *args);
    NTSTATUS (WINAPI *p_vkCreateFramebuffer)(void *args);
    NTSTATUS (WINAPI *p_vkCreateGraphicsPipelines)(void *args);
    NTSTATUS (WINAPI *p_vkCreateImage)(void *args);
    NTSTATUS (WINAPI *p_vkCreateImageView)(void *args);
    NTSTATUS (WINAPI *p_vkCreateIndirectCommandsLayoutNV)(void *args);
    NTSTATUS (WINAPI *p_vkCreateInstance)(void *args);
    NTSTATUS (WINAPI *p_vkCreatePipelineCache)(void *args);
    NTSTATUS (WINAPI *p_vkCreatePipelineLayout)(void *args);
    NTSTATUS (WINAPI *p_vkCreatePrivateDataSlotEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCreateQueryPool)(void *args);
    NTSTATUS (WINAPI *p_vkCreateRayTracingPipelinesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateRayTracingPipelinesNV)(void *args);
    NTSTATUS (WINAPI *p_vkCreateRenderPass)(void *args);
    NTSTATUS (WINAPI *p_vkCreateRenderPass2)(void *args);
    NTSTATUS (WINAPI *p_vkCreateRenderPass2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateSampler)(void *args);
    NTSTATUS (WINAPI *p_vkCreateSamplerYcbcrConversion)(void *args);
    NTSTATUS (WINAPI *p_vkCreateSamplerYcbcrConversionKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateSemaphore)(void *args);
    NTSTATUS (WINAPI *p_vkCreateShaderModule)(void *args);
    NTSTATUS (WINAPI *p_vkCreateSwapchainKHR)(void *args);
    NTSTATUS (WINAPI *p_vkCreateValidationCacheEXT)(void *args);
    NTSTATUS (WINAPI *p_vkCreateWin32SurfaceKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDebugMarkerSetObjectNameEXT)(void *args);
    NTSTATUS (WINAPI *p_vkDebugMarkerSetObjectTagEXT)(void *args);
    NTSTATUS (WINAPI *p_vkDebugReportMessageEXT)(void *args);
    NTSTATUS (WINAPI *p_vkDeferredOperationJoinKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyAccelerationStructureKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyAccelerationStructureNV)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyBufferView)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyCommandPool)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyCuFunctionNVX)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyCuModuleNVX)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDebugReportCallbackEXT)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDebugUtilsMessengerEXT)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDeferredOperationKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDescriptorPool)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDescriptorSetLayout)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDescriptorUpdateTemplate)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDescriptorUpdateTemplateKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyDevice)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyEvent)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyFence)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyFramebuffer)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyImage)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyImageView)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyIndirectCommandsLayoutNV)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyInstance)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyPipeline)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyPipelineCache)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyPipelineLayout)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyPrivateDataSlotEXT)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyQueryPool)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyRenderPass)(void *args);
    NTSTATUS (WINAPI *p_vkDestroySampler)(void *args);
    NTSTATUS (WINAPI *p_vkDestroySamplerYcbcrConversion)(void *args);
    NTSTATUS (WINAPI *p_vkDestroySamplerYcbcrConversionKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDestroySemaphore)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyShaderModule)(void *args);
    NTSTATUS (WINAPI *p_vkDestroySurfaceKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDestroySwapchainKHR)(void *args);
    NTSTATUS (WINAPI *p_vkDestroyValidationCacheEXT)(void *args);
    NTSTATUS (WINAPI *p_vkDeviceWaitIdle)(void *args);
    NTSTATUS (WINAPI *p_vkEndCommandBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkEnumerateDeviceExtensionProperties)(void *args);
    NTSTATUS (WINAPI *p_vkEnumerateDeviceLayerProperties)(void *args);
    NTSTATUS (WINAPI *p_vkEnumerateInstanceExtensionProperties)(void *args);
    NTSTATUS (WINAPI *p_vkEnumerateInstanceVersion)(void *args);
    NTSTATUS (WINAPI *p_vkEnumeratePhysicalDeviceGroups)(void *args);
    NTSTATUS (WINAPI *p_vkEnumeratePhysicalDeviceGroupsKHR)(void *args);
    NTSTATUS (WINAPI *p_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)(void *args);
    NTSTATUS (WINAPI *p_vkEnumeratePhysicalDevices)(void *args);
    NTSTATUS (WINAPI *p_vkFlushMappedMemoryRanges)(void *args);
    NTSTATUS (WINAPI *p_vkFreeCommandBuffers)(void *args);
    NTSTATUS (WINAPI *p_vkFreeDescriptorSets)(void *args);
    NTSTATUS (WINAPI *p_vkFreeMemory)(void *args);
    NTSTATUS (WINAPI *p_vkGetAccelerationStructureBuildSizesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetAccelerationStructureDeviceAddressKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetAccelerationStructureHandleNV)(void *args);
    NTSTATUS (WINAPI *p_vkGetAccelerationStructureMemoryRequirementsNV)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferDeviceAddress)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferDeviceAddressEXT)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferDeviceAddressKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferMemoryRequirements)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferMemoryRequirements2)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferMemoryRequirements2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferOpaqueCaptureAddress)(void *args);
    NTSTATUS (WINAPI *p_vkGetBufferOpaqueCaptureAddressKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetCalibratedTimestampsEXT)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeferredOperationMaxConcurrencyKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeferredOperationResultKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDescriptorSetLayoutSupport)(void *args);
    NTSTATUS (WINAPI *p_vkGetDescriptorSetLayoutSupportKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceAccelerationStructureCompatibilityKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceBufferMemoryRequirementsKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceGroupPeerMemoryFeatures)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceGroupPeerMemoryFeaturesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceGroupPresentCapabilitiesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceGroupSurfacePresentModesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceImageMemoryRequirementsKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceImageSparseMemoryRequirementsKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceMemoryCommitment)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceMemoryOpaqueCaptureAddress)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceMemoryOpaqueCaptureAddressKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceQueue)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceQueue2)(void *args);
    NTSTATUS (WINAPI *p_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)(void *args);
    NTSTATUS (WINAPI *p_vkGetEventStatus)(void *args);
    NTSTATUS (WINAPI *p_vkGetFenceStatus)(void *args);
    NTSTATUS (WINAPI *p_vkGetGeneratedCommandsMemoryRequirementsNV)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageMemoryRequirements)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageMemoryRequirements2)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageMemoryRequirements2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageSparseMemoryRequirements)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageSparseMemoryRequirements2)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageSparseMemoryRequirements2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageSubresourceLayout)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageViewAddressNVX)(void *args);
    NTSTATUS (WINAPI *p_vkGetImageViewHandleNVX)(void *args);
    NTSTATUS (WINAPI *p_vkGetMemoryHostPointerPropertiesEXT)(void *args);
    NTSTATUS (WINAPI *p_vkGetPerformanceParameterINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceExternalBufferProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceExternalBufferPropertiesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceExternalFenceProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceExternalFencePropertiesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceExternalSemaphoreProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceFeatures)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceFeatures2)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceFeatures2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceFormatProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceFormatProperties2)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceFormatProperties2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceFragmentShadingRatesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceImageFormatProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceImageFormatProperties2)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceImageFormatProperties2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceMemoryProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceMemoryProperties2)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceMemoryProperties2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceMultisamplePropertiesEXT)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDevicePresentRectanglesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceProperties2)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceProperties2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceQueueFamilyProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceQueueFamilyProperties2)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceQueueFamilyProperties2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSparseImageFormatProperties)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSparseImageFormatProperties2)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSurfaceCapabilities2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSurfaceFormats2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSurfaceFormatsKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSurfacePresentModesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceSurfaceSupportKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceToolPropertiesEXT)(void *args);
    NTSTATUS (WINAPI *p_vkGetPhysicalDeviceWin32PresentationSupportKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPipelineCacheData)(void *args);
    NTSTATUS (WINAPI *p_vkGetPipelineExecutableInternalRepresentationsKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPipelineExecutablePropertiesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPipelineExecutableStatisticsKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetPrivateDataEXT)(void *args);
    NTSTATUS (WINAPI *p_vkGetQueryPoolResults)(void *args);
    NTSTATUS (WINAPI *p_vkGetQueueCheckpointData2NV)(void *args);
    NTSTATUS (WINAPI *p_vkGetQueueCheckpointDataNV)(void *args);
    NTSTATUS (WINAPI *p_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetRayTracingShaderGroupHandlesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetRayTracingShaderGroupHandlesNV)(void *args);
    NTSTATUS (WINAPI *p_vkGetRayTracingShaderGroupStackSizeKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetRenderAreaGranularity)(void *args);
    NTSTATUS (WINAPI *p_vkGetSemaphoreCounterValue)(void *args);
    NTSTATUS (WINAPI *p_vkGetSemaphoreCounterValueKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetShaderInfoAMD)(void *args);
    NTSTATUS (WINAPI *p_vkGetSwapchainImagesKHR)(void *args);
    NTSTATUS (WINAPI *p_vkGetValidationCacheDataEXT)(void *args);
    NTSTATUS (WINAPI *p_vkInitializePerformanceApiINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkInvalidateMappedMemoryRanges)(void *args);
    NTSTATUS (WINAPI *p_vkMapMemory)(void *args);
    NTSTATUS (WINAPI *p_vkMergePipelineCaches)(void *args);
    NTSTATUS (WINAPI *p_vkMergeValidationCachesEXT)(void *args);
    NTSTATUS (WINAPI *p_vkQueueBeginDebugUtilsLabelEXT)(void *args);
    NTSTATUS (WINAPI *p_vkQueueBindSparse)(void *args);
    NTSTATUS (WINAPI *p_vkQueueEndDebugUtilsLabelEXT)(void *args);
    NTSTATUS (WINAPI *p_vkQueueInsertDebugUtilsLabelEXT)(void *args);
    NTSTATUS (WINAPI *p_vkQueuePresentKHR)(void *args);
    NTSTATUS (WINAPI *p_vkQueueSetPerformanceConfigurationINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkQueueSubmit)(void *args);
    NTSTATUS (WINAPI *p_vkQueueSubmit2KHR)(void *args);
    NTSTATUS (WINAPI *p_vkQueueWaitIdle)(void *args);
    NTSTATUS (WINAPI *p_vkReleasePerformanceConfigurationINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkReleaseProfilingLockKHR)(void *args);
    NTSTATUS (WINAPI *p_vkResetCommandBuffer)(void *args);
    NTSTATUS (WINAPI *p_vkResetCommandPool)(void *args);
    NTSTATUS (WINAPI *p_vkResetDescriptorPool)(void *args);
    NTSTATUS (WINAPI *p_vkResetEvent)(void *args);
    NTSTATUS (WINAPI *p_vkResetFences)(void *args);
    NTSTATUS (WINAPI *p_vkResetQueryPool)(void *args);
    NTSTATUS (WINAPI *p_vkResetQueryPoolEXT)(void *args);
    NTSTATUS (WINAPI *p_vkSetDebugUtilsObjectNameEXT)(void *args);
    NTSTATUS (WINAPI *p_vkSetDebugUtilsObjectTagEXT)(void *args);
    NTSTATUS (WINAPI *p_vkSetDeviceMemoryPriorityEXT)(void *args);
    NTSTATUS (WINAPI *p_vkSetEvent)(void *args);
    NTSTATUS (WINAPI *p_vkSetPrivateDataEXT)(void *args);
    NTSTATUS (WINAPI *p_vkSignalSemaphore)(void *args);
    NTSTATUS (WINAPI *p_vkSignalSemaphoreKHR)(void *args);
    NTSTATUS (WINAPI *p_vkSubmitDebugUtilsMessageEXT)(void *args);
    NTSTATUS (WINAPI *p_vkTrimCommandPool)(void *args);
    NTSTATUS (WINAPI *p_vkTrimCommandPoolKHR)(void *args);
    NTSTATUS (WINAPI *p_vkUninitializePerformanceApiINTEL)(void *args);
    NTSTATUS (WINAPI *p_vkUnmapMemory)(void *args);
    NTSTATUS (WINAPI *p_vkUpdateDescriptorSetWithTemplate)(void *args);
    NTSTATUS (WINAPI *p_vkUpdateDescriptorSetWithTemplateKHR)(void *args);
    NTSTATUS (WINAPI *p_vkUpdateDescriptorSets)(void *args);
    NTSTATUS (WINAPI *p_vkWaitForFences)(void *args);
    NTSTATUS (WINAPI *p_vkWaitForPresentKHR)(void *args);
    NTSTATUS (WINAPI *p_vkWaitSemaphores)(void *args);
    NTSTATUS (WINAPI *p_vkWaitSemaphoresKHR)(void *args);
    NTSTATUS (WINAPI *p_vkWriteAccelerationStructuresPropertiesKHR)(void *args);

    /* winevulkan specific functions */
    BOOL (WINAPI *p_is_available_instance_function)(VkInstance, const char *);
    BOOL (WINAPI *p_is_available_device_function)(VkDevice, const char *);
};

enum unix_call
{
    unix_init,
    unix_count,
};

#include "pshpack4.h"

struct vkAcquireNextImage2KHR_params
{
    VkDevice device;
    const VkAcquireNextImageInfoKHR *pAcquireInfo;
    uint32_t *pImageIndex;
};

struct vkAcquireNextImageKHR_params
{
    VkDevice device;
    VkSwapchainKHR swapchain;
    uint64_t timeout;
    VkSemaphore semaphore;
    VkFence fence;
    uint32_t *pImageIndex;
};

struct vkAcquirePerformanceConfigurationINTEL_params
{
    VkDevice device;
    const VkPerformanceConfigurationAcquireInfoINTEL *pAcquireInfo;
    VkPerformanceConfigurationINTEL *pConfiguration;
};

struct vkAcquireProfilingLockKHR_params
{
    VkDevice device;
    const VkAcquireProfilingLockInfoKHR *pInfo;
};

struct vkAllocateCommandBuffers_params
{
    VkDevice device;
    const VkCommandBufferAllocateInfo *pAllocateInfo;
    VkCommandBuffer *pCommandBuffers;
};

struct vkAllocateDescriptorSets_params
{
    VkDevice device;
    const VkDescriptorSetAllocateInfo *pAllocateInfo;
    VkDescriptorSet *pDescriptorSets;
};

struct vkAllocateMemory_params
{
    VkDevice device;
    const VkMemoryAllocateInfo *pAllocateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDeviceMemory *pMemory;
};

struct vkBeginCommandBuffer_params
{
    VkCommandBuffer commandBuffer;
    const VkCommandBufferBeginInfo *pBeginInfo;
};

struct vkBindAccelerationStructureMemoryNV_params
{
    VkDevice device;
    uint32_t bindInfoCount;
    const VkBindAccelerationStructureMemoryInfoNV *pBindInfos;
};

struct vkBindBufferMemory_params
{
    VkDevice device;
    VkBuffer buffer;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
};

struct vkBindBufferMemory2_params
{
    VkDevice device;
    uint32_t bindInfoCount;
    const VkBindBufferMemoryInfo *pBindInfos;
};

struct vkBindBufferMemory2KHR_params
{
    VkDevice device;
    uint32_t bindInfoCount;
    const VkBindBufferMemoryInfo *pBindInfos;
};

struct vkBindImageMemory_params
{
    VkDevice device;
    VkImage image;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
};

struct vkBindImageMemory2_params
{
    VkDevice device;
    uint32_t bindInfoCount;
    const VkBindImageMemoryInfo *pBindInfos;
};

struct vkBindImageMemory2KHR_params
{
    VkDevice device;
    uint32_t bindInfoCount;
    const VkBindImageMemoryInfo *pBindInfos;
};

struct vkBuildAccelerationStructuresKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR deferredOperation;
    uint32_t infoCount;
    const VkAccelerationStructureBuildGeometryInfoKHR *pInfos;
    const VkAccelerationStructureBuildRangeInfoKHR * const*ppBuildRangeInfos;
};

struct vkCmdBeginConditionalRenderingEXT_params
{
    VkCommandBuffer commandBuffer;
    const VkConditionalRenderingBeginInfoEXT *pConditionalRenderingBegin;
};

struct vkCmdBeginDebugUtilsLabelEXT_params
{
    VkCommandBuffer commandBuffer;
    const VkDebugUtilsLabelEXT *pLabelInfo;
};

struct vkCmdBeginQuery_params
{
    VkCommandBuffer commandBuffer;
    VkQueryPool queryPool;
    uint32_t query;
    VkQueryControlFlags flags;
};

struct vkCmdBeginQueryIndexedEXT_params
{
    VkCommandBuffer commandBuffer;
    VkQueryPool queryPool;
    uint32_t query;
    VkQueryControlFlags flags;
    uint32_t index;
};

struct vkCmdBeginRenderPass_params
{
    VkCommandBuffer commandBuffer;
    const VkRenderPassBeginInfo *pRenderPassBegin;
    VkSubpassContents contents;
};

struct vkCmdBeginRenderPass2_params
{
    VkCommandBuffer commandBuffer;
    const VkRenderPassBeginInfo *pRenderPassBegin;
    const VkSubpassBeginInfo *pSubpassBeginInfo;
};

struct vkCmdBeginRenderPass2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkRenderPassBeginInfo *pRenderPassBegin;
    const VkSubpassBeginInfo *pSubpassBeginInfo;
};

struct vkCmdBeginRenderingKHR_params
{
    VkCommandBuffer commandBuffer;
    const VkRenderingInfoKHR *pRenderingInfo;
};

struct vkCmdBeginTransformFeedbackEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstCounterBuffer;
    uint32_t counterBufferCount;
    const VkBuffer *pCounterBuffers;
    const VkDeviceSize *pCounterBufferOffsets;
};

struct vkCmdBindDescriptorSets_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipelineLayout layout;
    uint32_t firstSet;
    uint32_t descriptorSetCount;
    const VkDescriptorSet *pDescriptorSets;
    uint32_t dynamicOffsetCount;
    const uint32_t *pDynamicOffsets;
};

struct vkCmdBindIndexBuffer_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkIndexType indexType;
};

struct vkCmdBindInvocationMaskHUAWEI_params
{
    VkCommandBuffer commandBuffer;
    VkImageView imageView;
    VkImageLayout imageLayout;
};

struct vkCmdBindPipeline_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipeline pipeline;
};

struct vkCmdBindPipelineShaderGroupNV_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipeline pipeline;
    uint32_t groupIndex;
};

struct vkCmdBindShadingRateImageNV_params
{
    VkCommandBuffer commandBuffer;
    VkImageView imageView;
    VkImageLayout imageLayout;
};

struct vkCmdBindTransformFeedbackBuffersEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    const VkBuffer *pBuffers;
    const VkDeviceSize *pOffsets;
    const VkDeviceSize *pSizes;
};

struct vkCmdBindVertexBuffers_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    const VkBuffer *pBuffers;
    const VkDeviceSize *pOffsets;
};

struct vkCmdBindVertexBuffers2EXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstBinding;
    uint32_t bindingCount;
    const VkBuffer *pBuffers;
    const VkDeviceSize *pOffsets;
    const VkDeviceSize *pSizes;
    const VkDeviceSize *pStrides;
};

struct vkCmdBlitImage_params
{
    VkCommandBuffer commandBuffer;
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    const VkImageBlit *pRegions;
    VkFilter filter;
};

struct vkCmdBlitImage2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkBlitImageInfo2KHR *pBlitImageInfo;
};

struct vkCmdBuildAccelerationStructureNV_params
{
    VkCommandBuffer commandBuffer;
    const VkAccelerationStructureInfoNV *pInfo;
    VkBuffer instanceData;
    VkDeviceSize instanceOffset;
    VkBool32 update;
    VkAccelerationStructureNV dst;
    VkAccelerationStructureNV src;
    VkBuffer scratch;
    VkDeviceSize scratchOffset;
};

struct vkCmdBuildAccelerationStructuresIndirectKHR_params
{
    VkCommandBuffer commandBuffer;
    uint32_t infoCount;
    const VkAccelerationStructureBuildGeometryInfoKHR *pInfos;
    const VkDeviceAddress *pIndirectDeviceAddresses;
    const uint32_t *pIndirectStrides;
    const uint32_t * const*ppMaxPrimitiveCounts;
};

struct vkCmdBuildAccelerationStructuresKHR_params
{
    VkCommandBuffer commandBuffer;
    uint32_t infoCount;
    const VkAccelerationStructureBuildGeometryInfoKHR *pInfos;
    const VkAccelerationStructureBuildRangeInfoKHR * const*ppBuildRangeInfos;
};

struct vkCmdClearAttachments_params
{
    VkCommandBuffer commandBuffer;
    uint32_t attachmentCount;
    const VkClearAttachment *pAttachments;
    uint32_t rectCount;
    const VkClearRect *pRects;
};

struct vkCmdClearColorImage_params
{
    VkCommandBuffer commandBuffer;
    VkImage image;
    VkImageLayout imageLayout;
    const VkClearColorValue *pColor;
    uint32_t rangeCount;
    const VkImageSubresourceRange *pRanges;
};

struct vkCmdClearDepthStencilImage_params
{
    VkCommandBuffer commandBuffer;
    VkImage image;
    VkImageLayout imageLayout;
    const VkClearDepthStencilValue *pDepthStencil;
    uint32_t rangeCount;
    const VkImageSubresourceRange *pRanges;
};

struct vkCmdCopyAccelerationStructureKHR_params
{
    VkCommandBuffer commandBuffer;
    const VkCopyAccelerationStructureInfoKHR *pInfo;
};

struct vkCmdCopyAccelerationStructureNV_params
{
    VkCommandBuffer commandBuffer;
    VkAccelerationStructureNV dst;
    VkAccelerationStructureNV src;
    VkCopyAccelerationStructureModeKHR mode;
};

struct vkCmdCopyAccelerationStructureToMemoryKHR_params
{
    VkCommandBuffer commandBuffer;
    const VkCopyAccelerationStructureToMemoryInfoKHR *pInfo;
};

struct vkCmdCopyBuffer_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer srcBuffer;
    VkBuffer dstBuffer;
    uint32_t regionCount;
    const VkBufferCopy *pRegions;
};

struct vkCmdCopyBuffer2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkCopyBufferInfo2KHR *pCopyBufferInfo;
};

struct vkCmdCopyBufferToImage_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer srcBuffer;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    const VkBufferImageCopy *pRegions;
};

struct vkCmdCopyBufferToImage2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkCopyBufferToImageInfo2KHR *pCopyBufferToImageInfo;
};

struct vkCmdCopyImage_params
{
    VkCommandBuffer commandBuffer;
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    const VkImageCopy *pRegions;
};

struct vkCmdCopyImage2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkCopyImageInfo2KHR *pCopyImageInfo;
};

struct vkCmdCopyImageToBuffer_params
{
    VkCommandBuffer commandBuffer;
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkBuffer dstBuffer;
    uint32_t regionCount;
    const VkBufferImageCopy *pRegions;
};

struct vkCmdCopyImageToBuffer2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkCopyImageToBufferInfo2KHR *pCopyImageToBufferInfo;
};

struct vkCmdCopyMemoryToAccelerationStructureKHR_params
{
    VkCommandBuffer commandBuffer;
    const VkCopyMemoryToAccelerationStructureInfoKHR *pInfo;
};

struct vkCmdCopyQueryPoolResults_params
{
    VkCommandBuffer commandBuffer;
    VkQueryPool queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
    VkBuffer dstBuffer;
    VkDeviceSize dstOffset;
    VkDeviceSize stride;
    VkQueryResultFlags flags;
};

struct vkCmdCuLaunchKernelNVX_params
{
    VkCommandBuffer commandBuffer;
    const VkCuLaunchInfoNVX *pLaunchInfo;
};

struct vkCmdDebugMarkerBeginEXT_params
{
    VkCommandBuffer commandBuffer;
    const VkDebugMarkerMarkerInfoEXT *pMarkerInfo;
};

struct vkCmdDebugMarkerEndEXT_params
{
    VkCommandBuffer commandBuffer;
};

struct vkCmdDebugMarkerInsertEXT_params
{
    VkCommandBuffer commandBuffer;
    const VkDebugMarkerMarkerInfoEXT *pMarkerInfo;
};

struct vkCmdDispatch_params
{
    VkCommandBuffer commandBuffer;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};

struct vkCmdDispatchBase_params
{
    VkCommandBuffer commandBuffer;
    uint32_t baseGroupX;
    uint32_t baseGroupY;
    uint32_t baseGroupZ;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};

struct vkCmdDispatchBaseKHR_params
{
    VkCommandBuffer commandBuffer;
    uint32_t baseGroupX;
    uint32_t baseGroupY;
    uint32_t baseGroupZ;
    uint32_t groupCountX;
    uint32_t groupCountY;
    uint32_t groupCountZ;
};

struct vkCmdDispatchIndirect_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
};

struct vkCmdDraw_params
{
    VkCommandBuffer commandBuffer;
    uint32_t vertexCount;
    uint32_t instanceCount;
    uint32_t firstVertex;
    uint32_t firstInstance;
};

struct vkCmdDrawIndexed_params
{
    VkCommandBuffer commandBuffer;
    uint32_t indexCount;
    uint32_t instanceCount;
    uint32_t firstIndex;
    int32_t vertexOffset;
    uint32_t firstInstance;
};

struct vkCmdDrawIndexedIndirect_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    uint32_t drawCount;
    uint32_t stride;
};

struct vkCmdDrawIndexedIndirectCount_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkBuffer countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};

struct vkCmdDrawIndexedIndirectCountAMD_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkBuffer countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};

struct vkCmdDrawIndexedIndirectCountKHR_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkBuffer countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};

struct vkCmdDrawIndirect_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    uint32_t drawCount;
    uint32_t stride;
};

struct vkCmdDrawIndirectByteCountEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t instanceCount;
    uint32_t firstInstance;
    VkBuffer counterBuffer;
    VkDeviceSize counterBufferOffset;
    uint32_t counterOffset;
    uint32_t vertexStride;
};

struct vkCmdDrawIndirectCount_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkBuffer countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};

struct vkCmdDrawIndirectCountAMD_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkBuffer countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};

struct vkCmdDrawIndirectCountKHR_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkBuffer countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};

struct vkCmdDrawMeshTasksIndirectCountNV_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkBuffer countBuffer;
    VkDeviceSize countBufferOffset;
    uint32_t maxDrawCount;
    uint32_t stride;
};

struct vkCmdDrawMeshTasksIndirectNV_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer buffer;
    VkDeviceSize offset;
    uint32_t drawCount;
    uint32_t stride;
};

struct vkCmdDrawMeshTasksNV_params
{
    VkCommandBuffer commandBuffer;
    uint32_t taskCount;
    uint32_t firstTask;
};

struct vkCmdDrawMultiEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t drawCount;
    const VkMultiDrawInfoEXT *pVertexInfo;
    uint32_t instanceCount;
    uint32_t firstInstance;
    uint32_t stride;
};

struct vkCmdDrawMultiIndexedEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t drawCount;
    const VkMultiDrawIndexedInfoEXT *pIndexInfo;
    uint32_t instanceCount;
    uint32_t firstInstance;
    uint32_t stride;
    const int32_t *pVertexOffset;
};

struct vkCmdEndConditionalRenderingEXT_params
{
    VkCommandBuffer commandBuffer;
};

struct vkCmdEndDebugUtilsLabelEXT_params
{
    VkCommandBuffer commandBuffer;
};

struct vkCmdEndQuery_params
{
    VkCommandBuffer commandBuffer;
    VkQueryPool queryPool;
    uint32_t query;
};

struct vkCmdEndQueryIndexedEXT_params
{
    VkCommandBuffer commandBuffer;
    VkQueryPool queryPool;
    uint32_t query;
    uint32_t index;
};

struct vkCmdEndRenderPass_params
{
    VkCommandBuffer commandBuffer;
};

struct vkCmdEndRenderPass2_params
{
    VkCommandBuffer commandBuffer;
    const VkSubpassEndInfo *pSubpassEndInfo;
};

struct vkCmdEndRenderPass2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkSubpassEndInfo *pSubpassEndInfo;
};

struct vkCmdEndRenderingKHR_params
{
    VkCommandBuffer commandBuffer;
};

struct vkCmdEndTransformFeedbackEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstCounterBuffer;
    uint32_t counterBufferCount;
    const VkBuffer *pCounterBuffers;
    const VkDeviceSize *pCounterBufferOffsets;
};

struct vkCmdExecuteCommands_params
{
    VkCommandBuffer commandBuffer;
    uint32_t commandBufferCount;
    const VkCommandBuffer *pCommandBuffers;
};

struct vkCmdExecuteGeneratedCommandsNV_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 isPreprocessed;
    const VkGeneratedCommandsInfoNV *pGeneratedCommandsInfo;
};

struct vkCmdFillBuffer_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer dstBuffer;
    VkDeviceSize dstOffset;
    VkDeviceSize size;
    uint32_t data;
};

struct vkCmdInsertDebugUtilsLabelEXT_params
{
    VkCommandBuffer commandBuffer;
    const VkDebugUtilsLabelEXT *pLabelInfo;
};

struct vkCmdNextSubpass_params
{
    VkCommandBuffer commandBuffer;
    VkSubpassContents contents;
};

struct vkCmdNextSubpass2_params
{
    VkCommandBuffer commandBuffer;
    const VkSubpassBeginInfo *pSubpassBeginInfo;
    const VkSubpassEndInfo *pSubpassEndInfo;
};

struct vkCmdNextSubpass2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkSubpassBeginInfo *pSubpassBeginInfo;
    const VkSubpassEndInfo *pSubpassEndInfo;
};

struct vkCmdPipelineBarrier_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineStageFlags srcStageMask;
    VkPipelineStageFlags dstStageMask;
    VkDependencyFlags dependencyFlags;
    uint32_t memoryBarrierCount;
    const VkMemoryBarrier *pMemoryBarriers;
    uint32_t bufferMemoryBarrierCount;
    const VkBufferMemoryBarrier *pBufferMemoryBarriers;
    uint32_t imageMemoryBarrierCount;
    const VkImageMemoryBarrier *pImageMemoryBarriers;
};

struct vkCmdPipelineBarrier2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkDependencyInfoKHR *pDependencyInfo;
};

struct vkCmdPreprocessGeneratedCommandsNV_params
{
    VkCommandBuffer commandBuffer;
    const VkGeneratedCommandsInfoNV *pGeneratedCommandsInfo;
};

struct vkCmdPushConstants_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineLayout layout;
    VkShaderStageFlags stageFlags;
    uint32_t offset;
    uint32_t size;
    const void *pValues;
};

struct vkCmdPushDescriptorSetKHR_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipelineLayout layout;
    uint32_t set;
    uint32_t descriptorWriteCount;
    const VkWriteDescriptorSet *pDescriptorWrites;
};

struct vkCmdPushDescriptorSetWithTemplateKHR_params
{
    VkCommandBuffer commandBuffer;
    VkDescriptorUpdateTemplate descriptorUpdateTemplate;
    VkPipelineLayout layout;
    uint32_t set;
    const void *pData;
};

struct vkCmdResetEvent_params
{
    VkCommandBuffer commandBuffer;
    VkEvent event;
    VkPipelineStageFlags stageMask;
};

struct vkCmdResetEvent2KHR_params
{
    VkCommandBuffer commandBuffer;
    VkEvent event;
    VkPipelineStageFlags2KHR stageMask;
};

struct vkCmdResetQueryPool_params
{
    VkCommandBuffer commandBuffer;
    VkQueryPool queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
};

struct vkCmdResolveImage_params
{
    VkCommandBuffer commandBuffer;
    VkImage srcImage;
    VkImageLayout srcImageLayout;
    VkImage dstImage;
    VkImageLayout dstImageLayout;
    uint32_t regionCount;
    const VkImageResolve *pRegions;
};

struct vkCmdResolveImage2KHR_params
{
    VkCommandBuffer commandBuffer;
    const VkResolveImageInfo2KHR *pResolveImageInfo;
};

struct vkCmdSetBlendConstants_params
{
    VkCommandBuffer commandBuffer;
    const float *blendConstants;
};

struct vkCmdSetCheckpointNV_params
{
    VkCommandBuffer commandBuffer;
    const void *pCheckpointMarker;
};

struct vkCmdSetCoarseSampleOrderNV_params
{
    VkCommandBuffer commandBuffer;
    VkCoarseSampleOrderTypeNV sampleOrderType;
    uint32_t customSampleOrderCount;
    const VkCoarseSampleOrderCustomNV *pCustomSampleOrders;
};

struct vkCmdSetColorWriteEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t attachmentCount;
    const VkBool32 *pColorWriteEnables;
};

struct vkCmdSetCullModeEXT_params
{
    VkCommandBuffer commandBuffer;
    VkCullModeFlags cullMode;
};

struct vkCmdSetDepthBias_params
{
    VkCommandBuffer commandBuffer;
    float depthBiasConstantFactor;
    float depthBiasClamp;
    float depthBiasSlopeFactor;
};

struct vkCmdSetDepthBiasEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 depthBiasEnable;
};

struct vkCmdSetDepthBounds_params
{
    VkCommandBuffer commandBuffer;
    float minDepthBounds;
    float maxDepthBounds;
};

struct vkCmdSetDepthBoundsTestEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 depthBoundsTestEnable;
};

struct vkCmdSetDepthCompareOpEXT_params
{
    VkCommandBuffer commandBuffer;
    VkCompareOp depthCompareOp;
};

struct vkCmdSetDepthTestEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 depthTestEnable;
};

struct vkCmdSetDepthWriteEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 depthWriteEnable;
};

struct vkCmdSetDeviceMask_params
{
    VkCommandBuffer commandBuffer;
    uint32_t deviceMask;
};

struct vkCmdSetDeviceMaskKHR_params
{
    VkCommandBuffer commandBuffer;
    uint32_t deviceMask;
};

struct vkCmdSetDiscardRectangleEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstDiscardRectangle;
    uint32_t discardRectangleCount;
    const VkRect2D *pDiscardRectangles;
};

struct vkCmdSetEvent_params
{
    VkCommandBuffer commandBuffer;
    VkEvent event;
    VkPipelineStageFlags stageMask;
};

struct vkCmdSetEvent2KHR_params
{
    VkCommandBuffer commandBuffer;
    VkEvent event;
    const VkDependencyInfoKHR *pDependencyInfo;
};

struct vkCmdSetExclusiveScissorNV_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstExclusiveScissor;
    uint32_t exclusiveScissorCount;
    const VkRect2D *pExclusiveScissors;
};

struct vkCmdSetFragmentShadingRateEnumNV_params
{
    VkCommandBuffer commandBuffer;
    VkFragmentShadingRateNV shadingRate;
    const VkFragmentShadingRateCombinerOpKHR *combinerOps;
};

struct vkCmdSetFragmentShadingRateKHR_params
{
    VkCommandBuffer commandBuffer;
    const VkExtent2D *pFragmentSize;
    const VkFragmentShadingRateCombinerOpKHR *combinerOps;
};

struct vkCmdSetFrontFaceEXT_params
{
    VkCommandBuffer commandBuffer;
    VkFrontFace frontFace;
};

struct vkCmdSetLineStippleEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t lineStippleFactor;
    uint16_t lineStipplePattern;
};

struct vkCmdSetLineWidth_params
{
    VkCommandBuffer commandBuffer;
    float lineWidth;
};

struct vkCmdSetLogicOpEXT_params
{
    VkCommandBuffer commandBuffer;
    VkLogicOp logicOp;
};

struct vkCmdSetPatchControlPointsEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t patchControlPoints;
};

struct vkCmdSetPerformanceMarkerINTEL_params
{
    VkCommandBuffer commandBuffer;
    const VkPerformanceMarkerInfoINTEL *pMarkerInfo;
};

struct vkCmdSetPerformanceOverrideINTEL_params
{
    VkCommandBuffer commandBuffer;
    const VkPerformanceOverrideInfoINTEL *pOverrideInfo;
};

struct vkCmdSetPerformanceStreamMarkerINTEL_params
{
    VkCommandBuffer commandBuffer;
    const VkPerformanceStreamMarkerInfoINTEL *pMarkerInfo;
};

struct vkCmdSetPrimitiveRestartEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 primitiveRestartEnable;
};

struct vkCmdSetPrimitiveTopologyEXT_params
{
    VkCommandBuffer commandBuffer;
    VkPrimitiveTopology primitiveTopology;
};

struct vkCmdSetRasterizerDiscardEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 rasterizerDiscardEnable;
};

struct vkCmdSetRayTracingPipelineStackSizeKHR_params
{
    VkCommandBuffer commandBuffer;
    uint32_t pipelineStackSize;
};

struct vkCmdSetSampleLocationsEXT_params
{
    VkCommandBuffer commandBuffer;
    const VkSampleLocationsInfoEXT *pSampleLocationsInfo;
};

struct vkCmdSetScissor_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstScissor;
    uint32_t scissorCount;
    const VkRect2D *pScissors;
};

struct vkCmdSetScissorWithCountEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t scissorCount;
    const VkRect2D *pScissors;
};

struct vkCmdSetStencilCompareMask_params
{
    VkCommandBuffer commandBuffer;
    VkStencilFaceFlags faceMask;
    uint32_t compareMask;
};

struct vkCmdSetStencilOpEXT_params
{
    VkCommandBuffer commandBuffer;
    VkStencilFaceFlags faceMask;
    VkStencilOp failOp;
    VkStencilOp passOp;
    VkStencilOp depthFailOp;
    VkCompareOp compareOp;
};

struct vkCmdSetStencilReference_params
{
    VkCommandBuffer commandBuffer;
    VkStencilFaceFlags faceMask;
    uint32_t reference;
};

struct vkCmdSetStencilTestEnableEXT_params
{
    VkCommandBuffer commandBuffer;
    VkBool32 stencilTestEnable;
};

struct vkCmdSetStencilWriteMask_params
{
    VkCommandBuffer commandBuffer;
    VkStencilFaceFlags faceMask;
    uint32_t writeMask;
};

struct vkCmdSetVertexInputEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t vertexBindingDescriptionCount;
    const VkVertexInputBindingDescription2EXT *pVertexBindingDescriptions;
    uint32_t vertexAttributeDescriptionCount;
    const VkVertexInputAttributeDescription2EXT *pVertexAttributeDescriptions;
};

struct vkCmdSetViewport_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstViewport;
    uint32_t viewportCount;
    const VkViewport *pViewports;
};

struct vkCmdSetViewportShadingRatePaletteNV_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstViewport;
    uint32_t viewportCount;
    const VkShadingRatePaletteNV *pShadingRatePalettes;
};

struct vkCmdSetViewportWScalingNV_params
{
    VkCommandBuffer commandBuffer;
    uint32_t firstViewport;
    uint32_t viewportCount;
    const VkViewportWScalingNV *pViewportWScalings;
};

struct vkCmdSetViewportWithCountEXT_params
{
    VkCommandBuffer commandBuffer;
    uint32_t viewportCount;
    const VkViewport *pViewports;
};

struct vkCmdSubpassShadingHUAWEI_params
{
    VkCommandBuffer commandBuffer;
};

struct vkCmdTraceRaysIndirectKHR_params
{
    VkCommandBuffer commandBuffer;
    const VkStridedDeviceAddressRegionKHR *pRaygenShaderBindingTable;
    const VkStridedDeviceAddressRegionKHR *pMissShaderBindingTable;
    const VkStridedDeviceAddressRegionKHR *pHitShaderBindingTable;
    const VkStridedDeviceAddressRegionKHR *pCallableShaderBindingTable;
    VkDeviceAddress indirectDeviceAddress;
};

struct vkCmdTraceRaysKHR_params
{
    VkCommandBuffer commandBuffer;
    const VkStridedDeviceAddressRegionKHR *pRaygenShaderBindingTable;
    const VkStridedDeviceAddressRegionKHR *pMissShaderBindingTable;
    const VkStridedDeviceAddressRegionKHR *pHitShaderBindingTable;
    const VkStridedDeviceAddressRegionKHR *pCallableShaderBindingTable;
    uint32_t width;
    uint32_t height;
    uint32_t depth;
};

struct vkCmdTraceRaysNV_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer raygenShaderBindingTableBuffer;
    VkDeviceSize raygenShaderBindingOffset;
    VkBuffer missShaderBindingTableBuffer;
    VkDeviceSize missShaderBindingOffset;
    VkDeviceSize missShaderBindingStride;
    VkBuffer hitShaderBindingTableBuffer;
    VkDeviceSize hitShaderBindingOffset;
    VkDeviceSize hitShaderBindingStride;
    VkBuffer callableShaderBindingTableBuffer;
    VkDeviceSize callableShaderBindingOffset;
    VkDeviceSize callableShaderBindingStride;
    uint32_t width;
    uint32_t height;
    uint32_t depth;
};

struct vkCmdUpdateBuffer_params
{
    VkCommandBuffer commandBuffer;
    VkBuffer dstBuffer;
    VkDeviceSize dstOffset;
    VkDeviceSize dataSize;
    const void *pData;
};

struct vkCmdWaitEvents_params
{
    VkCommandBuffer commandBuffer;
    uint32_t eventCount;
    const VkEvent *pEvents;
    VkPipelineStageFlags srcStageMask;
    VkPipelineStageFlags dstStageMask;
    uint32_t memoryBarrierCount;
    const VkMemoryBarrier *pMemoryBarriers;
    uint32_t bufferMemoryBarrierCount;
    const VkBufferMemoryBarrier *pBufferMemoryBarriers;
    uint32_t imageMemoryBarrierCount;
    const VkImageMemoryBarrier *pImageMemoryBarriers;
};

struct vkCmdWaitEvents2KHR_params
{
    VkCommandBuffer commandBuffer;
    uint32_t eventCount;
    const VkEvent *pEvents;
    const VkDependencyInfoKHR *pDependencyInfos;
};

struct vkCmdWriteAccelerationStructuresPropertiesKHR_params
{
    VkCommandBuffer commandBuffer;
    uint32_t accelerationStructureCount;
    const VkAccelerationStructureKHR *pAccelerationStructures;
    VkQueryType queryType;
    VkQueryPool queryPool;
    uint32_t firstQuery;
};

struct vkCmdWriteAccelerationStructuresPropertiesNV_params
{
    VkCommandBuffer commandBuffer;
    uint32_t accelerationStructureCount;
    const VkAccelerationStructureNV *pAccelerationStructures;
    VkQueryType queryType;
    VkQueryPool queryPool;
    uint32_t firstQuery;
};

struct vkCmdWriteBufferMarker2AMD_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineStageFlags2KHR stage;
    VkBuffer dstBuffer;
    VkDeviceSize dstOffset;
    uint32_t marker;
};

struct vkCmdWriteBufferMarkerAMD_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineStageFlagBits pipelineStage;
    VkBuffer dstBuffer;
    VkDeviceSize dstOffset;
    uint32_t marker;
};

struct vkCmdWriteTimestamp_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineStageFlagBits pipelineStage;
    VkQueryPool queryPool;
    uint32_t query;
};

struct vkCmdWriteTimestamp2KHR_params
{
    VkCommandBuffer commandBuffer;
    VkPipelineStageFlags2KHR stage;
    VkQueryPool queryPool;
    uint32_t query;
};

struct vkCompileDeferredNV_params
{
    VkDevice device;
    VkPipeline pipeline;
    uint32_t shader;
};

struct vkCopyAccelerationStructureKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR deferredOperation;
    const VkCopyAccelerationStructureInfoKHR *pInfo;
};

struct vkCopyAccelerationStructureToMemoryKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR deferredOperation;
    const VkCopyAccelerationStructureToMemoryInfoKHR *pInfo;
};

struct vkCopyMemoryToAccelerationStructureKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR deferredOperation;
    const VkCopyMemoryToAccelerationStructureInfoKHR *pInfo;
};

struct vkCreateAccelerationStructureKHR_params
{
    VkDevice device;
    const VkAccelerationStructureCreateInfoKHR *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkAccelerationStructureKHR *pAccelerationStructure;
};

struct vkCreateAccelerationStructureNV_params
{
    VkDevice device;
    const VkAccelerationStructureCreateInfoNV *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkAccelerationStructureNV *pAccelerationStructure;
};

struct vkCreateBuffer_params
{
    VkDevice device;
    const VkBufferCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkBuffer *pBuffer;
};

struct vkCreateBufferView_params
{
    VkDevice device;
    const VkBufferViewCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkBufferView *pView;
};

struct vkCreateCommandPool_params
{
    VkDevice device;
    const VkCommandPoolCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkCommandPool *pCommandPool;
};

struct vkCreateComputePipelines_params
{
    VkDevice device;
    VkPipelineCache pipelineCache;
    uint32_t createInfoCount;
    const VkComputePipelineCreateInfo *pCreateInfos;
    const VkAllocationCallbacks *pAllocator;
    VkPipeline *pPipelines;
};

struct vkCreateCuFunctionNVX_params
{
    VkDevice device;
    const VkCuFunctionCreateInfoNVX *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkCuFunctionNVX *pFunction;
};

struct vkCreateCuModuleNVX_params
{
    VkDevice device;
    const VkCuModuleCreateInfoNVX *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkCuModuleNVX *pModule;
};

struct vkCreateDebugReportCallbackEXT_params
{
    VkInstance instance;
    const VkDebugReportCallbackCreateInfoEXT *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDebugReportCallbackEXT *pCallback;
};

struct vkCreateDebugUtilsMessengerEXT_params
{
    VkInstance instance;
    const VkDebugUtilsMessengerCreateInfoEXT *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDebugUtilsMessengerEXT *pMessenger;
};

struct vkCreateDeferredOperationKHR_params
{
    VkDevice device;
    const VkAllocationCallbacks *pAllocator;
    VkDeferredOperationKHR *pDeferredOperation;
};

struct vkCreateDescriptorPool_params
{
    VkDevice device;
    const VkDescriptorPoolCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDescriptorPool *pDescriptorPool;
};

struct vkCreateDescriptorSetLayout_params
{
    VkDevice device;
    const VkDescriptorSetLayoutCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDescriptorSetLayout *pSetLayout;
};

struct vkCreateDescriptorUpdateTemplate_params
{
    VkDevice device;
    const VkDescriptorUpdateTemplateCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDescriptorUpdateTemplate *pDescriptorUpdateTemplate;
};

struct vkCreateDescriptorUpdateTemplateKHR_params
{
    VkDevice device;
    const VkDescriptorUpdateTemplateCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDescriptorUpdateTemplate *pDescriptorUpdateTemplate;
};

struct vkCreateDevice_params
{
    VkPhysicalDevice physicalDevice;
    const VkDeviceCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkDevice *pDevice;
};

struct vkCreateEvent_params
{
    VkDevice device;
    const VkEventCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkEvent *pEvent;
};

struct vkCreateFence_params
{
    VkDevice device;
    const VkFenceCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkFence *pFence;
};

struct vkCreateFramebuffer_params
{
    VkDevice device;
    const VkFramebufferCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkFramebuffer *pFramebuffer;
};

struct vkCreateGraphicsPipelines_params
{
    VkDevice device;
    VkPipelineCache pipelineCache;
    uint32_t createInfoCount;
    const VkGraphicsPipelineCreateInfo *pCreateInfos;
    const VkAllocationCallbacks *pAllocator;
    VkPipeline *pPipelines;
};

struct vkCreateImage_params
{
    VkDevice device;
    const VkImageCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkImage *pImage;
};

struct vkCreateImageView_params
{
    VkDevice device;
    const VkImageViewCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkImageView *pView;
};

struct vkCreateIndirectCommandsLayoutNV_params
{
    VkDevice device;
    const VkIndirectCommandsLayoutCreateInfoNV *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkIndirectCommandsLayoutNV *pIndirectCommandsLayout;
};

struct vkCreateInstance_params
{
    const VkInstanceCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkInstance *pInstance;
};

struct vkCreatePipelineCache_params
{
    VkDevice device;
    const VkPipelineCacheCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkPipelineCache *pPipelineCache;
};

struct vkCreatePipelineLayout_params
{
    VkDevice device;
    const VkPipelineLayoutCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkPipelineLayout *pPipelineLayout;
};

struct vkCreatePrivateDataSlotEXT_params
{
    VkDevice device;
    const VkPrivateDataSlotCreateInfoEXT *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkPrivateDataSlotEXT *pPrivateDataSlot;
};

struct vkCreateQueryPool_params
{
    VkDevice device;
    const VkQueryPoolCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkQueryPool *pQueryPool;
};

struct vkCreateRayTracingPipelinesKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR deferredOperation;
    VkPipelineCache pipelineCache;
    uint32_t createInfoCount;
    const VkRayTracingPipelineCreateInfoKHR *pCreateInfos;
    const VkAllocationCallbacks *pAllocator;
    VkPipeline *pPipelines;
};

struct vkCreateRayTracingPipelinesNV_params
{
    VkDevice device;
    VkPipelineCache pipelineCache;
    uint32_t createInfoCount;
    const VkRayTracingPipelineCreateInfoNV *pCreateInfos;
    const VkAllocationCallbacks *pAllocator;
    VkPipeline *pPipelines;
};

struct vkCreateRenderPass_params
{
    VkDevice device;
    const VkRenderPassCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkRenderPass *pRenderPass;
};

struct vkCreateRenderPass2_params
{
    VkDevice device;
    const VkRenderPassCreateInfo2 *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkRenderPass *pRenderPass;
};

struct vkCreateRenderPass2KHR_params
{
    VkDevice device;
    const VkRenderPassCreateInfo2 *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkRenderPass *pRenderPass;
};

struct vkCreateSampler_params
{
    VkDevice device;
    const VkSamplerCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkSampler *pSampler;
};

struct vkCreateSamplerYcbcrConversion_params
{
    VkDevice device;
    const VkSamplerYcbcrConversionCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkSamplerYcbcrConversion *pYcbcrConversion;
};

struct vkCreateSamplerYcbcrConversionKHR_params
{
    VkDevice device;
    const VkSamplerYcbcrConversionCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkSamplerYcbcrConversion *pYcbcrConversion;
};

struct vkCreateSemaphore_params
{
    VkDevice device;
    const VkSemaphoreCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkSemaphore *pSemaphore;
};

struct vkCreateShaderModule_params
{
    VkDevice device;
    const VkShaderModuleCreateInfo *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkShaderModule *pShaderModule;
};

struct vkCreateSwapchainKHR_params
{
    VkDevice device;
    const VkSwapchainCreateInfoKHR *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkSwapchainKHR *pSwapchain;
};

struct vkCreateValidationCacheEXT_params
{
    VkDevice device;
    const VkValidationCacheCreateInfoEXT *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkValidationCacheEXT *pValidationCache;
};

struct vkCreateWin32SurfaceKHR_params
{
    VkInstance instance;
    const VkWin32SurfaceCreateInfoKHR *pCreateInfo;
    const VkAllocationCallbacks *pAllocator;
    VkSurfaceKHR *pSurface;
};

struct vkDebugMarkerSetObjectNameEXT_params
{
    VkDevice device;
    const VkDebugMarkerObjectNameInfoEXT *pNameInfo;
};

struct vkDebugMarkerSetObjectTagEXT_params
{
    VkDevice device;
    const VkDebugMarkerObjectTagInfoEXT *pTagInfo;
};

struct vkDebugReportMessageEXT_params
{
    VkInstance instance;
    VkDebugReportFlagsEXT flags;
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    size_t location;
    int32_t messageCode;
    const char *pLayerPrefix;
    const char *pMessage;
};

struct vkDeferredOperationJoinKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR operation;
};

struct vkDestroyAccelerationStructureKHR_params
{
    VkDevice device;
    VkAccelerationStructureKHR accelerationStructure;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyAccelerationStructureNV_params
{
    VkDevice device;
    VkAccelerationStructureNV accelerationStructure;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyBuffer_params
{
    VkDevice device;
    VkBuffer buffer;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyBufferView_params
{
    VkDevice device;
    VkBufferView bufferView;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyCommandPool_params
{
    VkDevice device;
    VkCommandPool commandPool;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyCuFunctionNVX_params
{
    VkDevice device;
    VkCuFunctionNVX function;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyCuModuleNVX_params
{
    VkDevice device;
    VkCuModuleNVX module;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDebugReportCallbackEXT_params
{
    VkInstance instance;
    VkDebugReportCallbackEXT callback;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDebugUtilsMessengerEXT_params
{
    VkInstance instance;
    VkDebugUtilsMessengerEXT messenger;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDeferredOperationKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR operation;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDescriptorPool_params
{
    VkDevice device;
    VkDescriptorPool descriptorPool;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDescriptorSetLayout_params
{
    VkDevice device;
    VkDescriptorSetLayout descriptorSetLayout;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDescriptorUpdateTemplate_params
{
    VkDevice device;
    VkDescriptorUpdateTemplate descriptorUpdateTemplate;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDescriptorUpdateTemplateKHR_params
{
    VkDevice device;
    VkDescriptorUpdateTemplate descriptorUpdateTemplate;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyDevice_params
{
    VkDevice device;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyEvent_params
{
    VkDevice device;
    VkEvent event;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyFence_params
{
    VkDevice device;
    VkFence fence;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyFramebuffer_params
{
    VkDevice device;
    VkFramebuffer framebuffer;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyImage_params
{
    VkDevice device;
    VkImage image;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyImageView_params
{
    VkDevice device;
    VkImageView imageView;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyIndirectCommandsLayoutNV_params
{
    VkDevice device;
    VkIndirectCommandsLayoutNV indirectCommandsLayout;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyInstance_params
{
    VkInstance instance;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyPipeline_params
{
    VkDevice device;
    VkPipeline pipeline;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyPipelineCache_params
{
    VkDevice device;
    VkPipelineCache pipelineCache;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyPipelineLayout_params
{
    VkDevice device;
    VkPipelineLayout pipelineLayout;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyPrivateDataSlotEXT_params
{
    VkDevice device;
    VkPrivateDataSlotEXT privateDataSlot;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyQueryPool_params
{
    VkDevice device;
    VkQueryPool queryPool;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyRenderPass_params
{
    VkDevice device;
    VkRenderPass renderPass;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroySampler_params
{
    VkDevice device;
    VkSampler sampler;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroySamplerYcbcrConversion_params
{
    VkDevice device;
    VkSamplerYcbcrConversion ycbcrConversion;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroySamplerYcbcrConversionKHR_params
{
    VkDevice device;
    VkSamplerYcbcrConversion ycbcrConversion;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroySemaphore_params
{
    VkDevice device;
    VkSemaphore semaphore;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyShaderModule_params
{
    VkDevice device;
    VkShaderModule shaderModule;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroySurfaceKHR_params
{
    VkInstance instance;
    VkSurfaceKHR surface;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroySwapchainKHR_params
{
    VkDevice device;
    VkSwapchainKHR swapchain;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDestroyValidationCacheEXT_params
{
    VkDevice device;
    VkValidationCacheEXT validationCache;
    const VkAllocationCallbacks *pAllocator;
};

struct vkDeviceWaitIdle_params
{
    VkDevice device;
};

struct vkEndCommandBuffer_params
{
    VkCommandBuffer commandBuffer;
};

struct vkEnumerateDeviceExtensionProperties_params
{
    VkPhysicalDevice physicalDevice;
    const char *pLayerName;
    uint32_t *pPropertyCount;
    VkExtensionProperties *pProperties;
};

struct vkEnumerateDeviceLayerProperties_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pPropertyCount;
    VkLayerProperties *pProperties;
};

struct vkEnumerateInstanceExtensionProperties_params
{
    const char *pLayerName;
    uint32_t *pPropertyCount;
    VkExtensionProperties *pProperties;
};

struct vkEnumerateInstanceVersion_params
{
    uint32_t *pApiVersion;
};

struct vkEnumeratePhysicalDeviceGroups_params
{
    VkInstance instance;
    uint32_t *pPhysicalDeviceGroupCount;
    VkPhysicalDeviceGroupProperties *pPhysicalDeviceGroupProperties;
};

struct vkEnumeratePhysicalDeviceGroupsKHR_params
{
    VkInstance instance;
    uint32_t *pPhysicalDeviceGroupCount;
    VkPhysicalDeviceGroupProperties *pPhysicalDeviceGroupProperties;
};

struct vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t queueFamilyIndex;
    uint32_t *pCounterCount;
    VkPerformanceCounterKHR *pCounters;
    VkPerformanceCounterDescriptionKHR *pCounterDescriptions;
};

struct vkEnumeratePhysicalDevices_params
{
    VkInstance instance;
    uint32_t *pPhysicalDeviceCount;
    VkPhysicalDevice *pPhysicalDevices;
};

struct vkFlushMappedMemoryRanges_params
{
    VkDevice device;
    uint32_t memoryRangeCount;
    const VkMappedMemoryRange *pMemoryRanges;
};

struct vkFreeCommandBuffers_params
{
    VkDevice device;
    VkCommandPool commandPool;
    uint32_t commandBufferCount;
    const VkCommandBuffer *pCommandBuffers;
};

struct vkFreeDescriptorSets_params
{
    VkDevice device;
    VkDescriptorPool descriptorPool;
    uint32_t descriptorSetCount;
    const VkDescriptorSet *pDescriptorSets;
};

struct vkFreeMemory_params
{
    VkDevice device;
    VkDeviceMemory memory;
    const VkAllocationCallbacks *pAllocator;
};

struct vkGetAccelerationStructureBuildSizesKHR_params
{
    VkDevice device;
    VkAccelerationStructureBuildTypeKHR buildType;
    const VkAccelerationStructureBuildGeometryInfoKHR *pBuildInfo;
    const uint32_t *pMaxPrimitiveCounts;
    VkAccelerationStructureBuildSizesInfoKHR *pSizeInfo;
};

struct vkGetAccelerationStructureDeviceAddressKHR_params
{
    VkDevice device;
    const VkAccelerationStructureDeviceAddressInfoKHR *pInfo;
    VkDeviceAddress result;
};

struct vkGetAccelerationStructureHandleNV_params
{
    VkDevice device;
    VkAccelerationStructureNV accelerationStructure;
    size_t dataSize;
    void *pData;
};

struct vkGetAccelerationStructureMemoryRequirementsNV_params
{
    VkDevice device;
    const VkAccelerationStructureMemoryRequirementsInfoNV *pInfo;
    VkMemoryRequirements2KHR *pMemoryRequirements;
};

struct vkGetBufferDeviceAddress_params
{
    VkDevice device;
    const VkBufferDeviceAddressInfo *pInfo;
    VkDeviceAddress result;
};

struct vkGetBufferDeviceAddressEXT_params
{
    VkDevice device;
    const VkBufferDeviceAddressInfo *pInfo;
    VkDeviceAddress result;
};

struct vkGetBufferDeviceAddressKHR_params
{
    VkDevice device;
    const VkBufferDeviceAddressInfo *pInfo;
    VkDeviceAddress result;
};

struct vkGetBufferMemoryRequirements_params
{
    VkDevice device;
    VkBuffer buffer;
    VkMemoryRequirements *pMemoryRequirements;
};

struct vkGetBufferMemoryRequirements2_params
{
    VkDevice device;
    const VkBufferMemoryRequirementsInfo2 *pInfo;
    VkMemoryRequirements2 *pMemoryRequirements;
};

struct vkGetBufferMemoryRequirements2KHR_params
{
    VkDevice device;
    const VkBufferMemoryRequirementsInfo2 *pInfo;
    VkMemoryRequirements2 *pMemoryRequirements;
};

struct vkGetBufferOpaqueCaptureAddress_params
{
    VkDevice device;
    const VkBufferDeviceAddressInfo *pInfo;
    uint64_t result;
};

struct vkGetBufferOpaqueCaptureAddressKHR_params
{
    VkDevice device;
    const VkBufferDeviceAddressInfo *pInfo;
    uint64_t result;
};

struct vkGetCalibratedTimestampsEXT_params
{
    VkDevice device;
    uint32_t timestampCount;
    const VkCalibratedTimestampInfoEXT *pTimestampInfos;
    uint64_t *pTimestamps;
    uint64_t *pMaxDeviation;
};

struct vkGetDeferredOperationMaxConcurrencyKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR operation;
};

struct vkGetDeferredOperationResultKHR_params
{
    VkDevice device;
    VkDeferredOperationKHR operation;
};

struct vkGetDescriptorSetLayoutSupport_params
{
    VkDevice device;
    const VkDescriptorSetLayoutCreateInfo *pCreateInfo;
    VkDescriptorSetLayoutSupport *pSupport;
};

struct vkGetDescriptorSetLayoutSupportKHR_params
{
    VkDevice device;
    const VkDescriptorSetLayoutCreateInfo *pCreateInfo;
    VkDescriptorSetLayoutSupport *pSupport;
};

struct vkGetDeviceAccelerationStructureCompatibilityKHR_params
{
    VkDevice device;
    const VkAccelerationStructureVersionInfoKHR *pVersionInfo;
    VkAccelerationStructureCompatibilityKHR *pCompatibility;
};

struct vkGetDeviceBufferMemoryRequirementsKHR_params
{
    VkDevice device;
    const VkDeviceBufferMemoryRequirementsKHR *pInfo;
    VkMemoryRequirements2 *pMemoryRequirements;
};

struct vkGetDeviceGroupPeerMemoryFeatures_params
{
    VkDevice device;
    uint32_t heapIndex;
    uint32_t localDeviceIndex;
    uint32_t remoteDeviceIndex;
    VkPeerMemoryFeatureFlags *pPeerMemoryFeatures;
};

struct vkGetDeviceGroupPeerMemoryFeaturesKHR_params
{
    VkDevice device;
    uint32_t heapIndex;
    uint32_t localDeviceIndex;
    uint32_t remoteDeviceIndex;
    VkPeerMemoryFeatureFlags *pPeerMemoryFeatures;
};

struct vkGetDeviceGroupPresentCapabilitiesKHR_params
{
    VkDevice device;
    VkDeviceGroupPresentCapabilitiesKHR *pDeviceGroupPresentCapabilities;
};

struct vkGetDeviceGroupSurfacePresentModesKHR_params
{
    VkDevice device;
    VkSurfaceKHR surface;
    VkDeviceGroupPresentModeFlagsKHR *pModes;
};

struct vkGetDeviceImageMemoryRequirementsKHR_params
{
    VkDevice device;
    const VkDeviceImageMemoryRequirementsKHR *pInfo;
    VkMemoryRequirements2 *pMemoryRequirements;
};

struct vkGetDeviceImageSparseMemoryRequirementsKHR_params
{
    VkDevice device;
    const VkDeviceImageMemoryRequirementsKHR *pInfo;
    uint32_t *pSparseMemoryRequirementCount;
    VkSparseImageMemoryRequirements2 *pSparseMemoryRequirements;
};

struct vkGetDeviceMemoryCommitment_params
{
    VkDevice device;
    VkDeviceMemory memory;
    VkDeviceSize *pCommittedMemoryInBytes;
};

struct vkGetDeviceMemoryOpaqueCaptureAddress_params
{
    VkDevice device;
    const VkDeviceMemoryOpaqueCaptureAddressInfo *pInfo;
    uint64_t result;
};

struct vkGetDeviceMemoryOpaqueCaptureAddressKHR_params
{
    VkDevice device;
    const VkDeviceMemoryOpaqueCaptureAddressInfo *pInfo;
    uint64_t result;
};

struct vkGetDeviceQueue_params
{
    VkDevice device;
    uint32_t queueFamilyIndex;
    uint32_t queueIndex;
    VkQueue *pQueue;
};

struct vkGetDeviceQueue2_params
{
    VkDevice device;
    const VkDeviceQueueInfo2 *pQueueInfo;
    VkQueue *pQueue;
};

struct vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_params
{
    VkDevice device;
    VkRenderPass renderpass;
    VkExtent2D *pMaxWorkgroupSize;
};

struct vkGetEventStatus_params
{
    VkDevice device;
    VkEvent event;
};

struct vkGetFenceStatus_params
{
    VkDevice device;
    VkFence fence;
};

struct vkGetGeneratedCommandsMemoryRequirementsNV_params
{
    VkDevice device;
    const VkGeneratedCommandsMemoryRequirementsInfoNV *pInfo;
    VkMemoryRequirements2 *pMemoryRequirements;
};

struct vkGetImageMemoryRequirements_params
{
    VkDevice device;
    VkImage image;
    VkMemoryRequirements *pMemoryRequirements;
};

struct vkGetImageMemoryRequirements2_params
{
    VkDevice device;
    const VkImageMemoryRequirementsInfo2 *pInfo;
    VkMemoryRequirements2 *pMemoryRequirements;
};

struct vkGetImageMemoryRequirements2KHR_params
{
    VkDevice device;
    const VkImageMemoryRequirementsInfo2 *pInfo;
    VkMemoryRequirements2 *pMemoryRequirements;
};

struct vkGetImageSparseMemoryRequirements_params
{
    VkDevice device;
    VkImage image;
    uint32_t *pSparseMemoryRequirementCount;
    VkSparseImageMemoryRequirements *pSparseMemoryRequirements;
};

struct vkGetImageSparseMemoryRequirements2_params
{
    VkDevice device;
    const VkImageSparseMemoryRequirementsInfo2 *pInfo;
    uint32_t *pSparseMemoryRequirementCount;
    VkSparseImageMemoryRequirements2 *pSparseMemoryRequirements;
};

struct vkGetImageSparseMemoryRequirements2KHR_params
{
    VkDevice device;
    const VkImageSparseMemoryRequirementsInfo2 *pInfo;
    uint32_t *pSparseMemoryRequirementCount;
    VkSparseImageMemoryRequirements2 *pSparseMemoryRequirements;
};

struct vkGetImageSubresourceLayout_params
{
    VkDevice device;
    VkImage image;
    const VkImageSubresource *pSubresource;
    VkSubresourceLayout *pLayout;
};

struct vkGetImageViewAddressNVX_params
{
    VkDevice device;
    VkImageView imageView;
    VkImageViewAddressPropertiesNVX *pProperties;
};

struct vkGetImageViewHandleNVX_params
{
    VkDevice device;
    const VkImageViewHandleInfoNVX *pInfo;
};

struct vkGetMemoryHostPointerPropertiesEXT_params
{
    VkDevice device;
    VkExternalMemoryHandleTypeFlagBits handleType;
    const void *pHostPointer;
    VkMemoryHostPointerPropertiesEXT *pMemoryHostPointerProperties;
};

struct vkGetPerformanceParameterINTEL_params
{
    VkDevice device;
    VkPerformanceParameterTypeINTEL parameter;
    VkPerformanceValueINTEL *pValue;
};

struct vkGetPhysicalDeviceCalibrateableTimeDomainsEXT_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pTimeDomainCount;
    VkTimeDomainEXT *pTimeDomains;
};

struct vkGetPhysicalDeviceCooperativeMatrixPropertiesNV_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pPropertyCount;
    VkCooperativeMatrixPropertiesNV *pProperties;
};

struct vkGetPhysicalDeviceExternalBufferProperties_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceExternalBufferInfo *pExternalBufferInfo;
    VkExternalBufferProperties *pExternalBufferProperties;
};

struct vkGetPhysicalDeviceExternalBufferPropertiesKHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceExternalBufferInfo *pExternalBufferInfo;
    VkExternalBufferProperties *pExternalBufferProperties;
};

struct vkGetPhysicalDeviceExternalFenceProperties_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceExternalFenceInfo *pExternalFenceInfo;
    VkExternalFenceProperties *pExternalFenceProperties;
};

struct vkGetPhysicalDeviceExternalFencePropertiesKHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceExternalFenceInfo *pExternalFenceInfo;
    VkExternalFenceProperties *pExternalFenceProperties;
};

struct vkGetPhysicalDeviceExternalSemaphoreProperties_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceExternalSemaphoreInfo *pExternalSemaphoreInfo;
    VkExternalSemaphoreProperties *pExternalSemaphoreProperties;
};

struct vkGetPhysicalDeviceExternalSemaphorePropertiesKHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceExternalSemaphoreInfo *pExternalSemaphoreInfo;
    VkExternalSemaphoreProperties *pExternalSemaphoreProperties;
};

struct vkGetPhysicalDeviceFeatures_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceFeatures *pFeatures;
};

struct vkGetPhysicalDeviceFeatures2_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceFeatures2 *pFeatures;
};

struct vkGetPhysicalDeviceFeatures2KHR_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceFeatures2 *pFeatures;
};

struct vkGetPhysicalDeviceFormatProperties_params
{
    VkPhysicalDevice physicalDevice;
    VkFormat format;
    VkFormatProperties *pFormatProperties;
};

struct vkGetPhysicalDeviceFormatProperties2_params
{
    VkPhysicalDevice physicalDevice;
    VkFormat format;
    VkFormatProperties2 *pFormatProperties;
};

struct vkGetPhysicalDeviceFormatProperties2KHR_params
{
    VkPhysicalDevice physicalDevice;
    VkFormat format;
    VkFormatProperties2 *pFormatProperties;
};

struct vkGetPhysicalDeviceFragmentShadingRatesKHR_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pFragmentShadingRateCount;
    VkPhysicalDeviceFragmentShadingRateKHR *pFragmentShadingRates;
};

struct vkGetPhysicalDeviceImageFormatProperties_params
{
    VkPhysicalDevice physicalDevice;
    VkFormat format;
    VkImageType type;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkImageCreateFlags flags;
    VkImageFormatProperties *pImageFormatProperties;
};

struct vkGetPhysicalDeviceImageFormatProperties2_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceImageFormatInfo2 *pImageFormatInfo;
    VkImageFormatProperties2 *pImageFormatProperties;
};

struct vkGetPhysicalDeviceImageFormatProperties2KHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceImageFormatInfo2 *pImageFormatInfo;
    VkImageFormatProperties2 *pImageFormatProperties;
};

struct vkGetPhysicalDeviceMemoryProperties_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceMemoryProperties *pMemoryProperties;
};

struct vkGetPhysicalDeviceMemoryProperties2_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceMemoryProperties2 *pMemoryProperties;
};

struct vkGetPhysicalDeviceMemoryProperties2KHR_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceMemoryProperties2 *pMemoryProperties;
};

struct vkGetPhysicalDeviceMultisamplePropertiesEXT_params
{
    VkPhysicalDevice physicalDevice;
    VkSampleCountFlagBits samples;
    VkMultisamplePropertiesEXT *pMultisampleProperties;
};

struct vkGetPhysicalDevicePresentRectanglesKHR_params
{
    VkPhysicalDevice physicalDevice;
    VkSurfaceKHR surface;
    uint32_t *pRectCount;
    VkRect2D *pRects;
};

struct vkGetPhysicalDeviceProperties_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceProperties *pProperties;
};

struct vkGetPhysicalDeviceProperties2_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceProperties2 *pProperties;
};

struct vkGetPhysicalDeviceProperties2KHR_params
{
    VkPhysicalDevice physicalDevice;
    VkPhysicalDeviceProperties2 *pProperties;
};

struct vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkQueryPoolPerformanceCreateInfoKHR *pPerformanceQueryCreateInfo;
    uint32_t *pNumPasses;
};

struct vkGetPhysicalDeviceQueueFamilyProperties_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pQueueFamilyPropertyCount;
    VkQueueFamilyProperties *pQueueFamilyProperties;
};

struct vkGetPhysicalDeviceQueueFamilyProperties2_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pQueueFamilyPropertyCount;
    VkQueueFamilyProperties2 *pQueueFamilyProperties;
};

struct vkGetPhysicalDeviceQueueFamilyProperties2KHR_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pQueueFamilyPropertyCount;
    VkQueueFamilyProperties2 *pQueueFamilyProperties;
};

struct vkGetPhysicalDeviceSparseImageFormatProperties_params
{
    VkPhysicalDevice physicalDevice;
    VkFormat format;
    VkImageType type;
    VkSampleCountFlagBits samples;
    VkImageUsageFlags usage;
    VkImageTiling tiling;
    uint32_t *pPropertyCount;
    VkSparseImageFormatProperties *pProperties;
};

struct vkGetPhysicalDeviceSparseImageFormatProperties2_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceSparseImageFormatInfo2 *pFormatInfo;
    uint32_t *pPropertyCount;
    VkSparseImageFormatProperties2 *pProperties;
};

struct vkGetPhysicalDeviceSparseImageFormatProperties2KHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceSparseImageFormatInfo2 *pFormatInfo;
    uint32_t *pPropertyCount;
    VkSparseImageFormatProperties2 *pProperties;
};

struct vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pCombinationCount;
    VkFramebufferMixedSamplesCombinationNV *pCombinations;
};

struct vkGetPhysicalDeviceSurfaceCapabilities2KHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceSurfaceInfo2KHR *pSurfaceInfo;
    VkSurfaceCapabilities2KHR *pSurfaceCapabilities;
};

struct vkGetPhysicalDeviceSurfaceCapabilitiesKHR_params
{
    VkPhysicalDevice physicalDevice;
    VkSurfaceKHR surface;
    VkSurfaceCapabilitiesKHR *pSurfaceCapabilities;
};

struct vkGetPhysicalDeviceSurfaceFormats2KHR_params
{
    VkPhysicalDevice physicalDevice;
    const VkPhysicalDeviceSurfaceInfo2KHR *pSurfaceInfo;
    uint32_t *pSurfaceFormatCount;
    VkSurfaceFormat2KHR *pSurfaceFormats;
};

struct vkGetPhysicalDeviceSurfaceFormatsKHR_params
{
    VkPhysicalDevice physicalDevice;
    VkSurfaceKHR surface;
    uint32_t *pSurfaceFormatCount;
    VkSurfaceFormatKHR *pSurfaceFormats;
};

struct vkGetPhysicalDeviceSurfacePresentModesKHR_params
{
    VkPhysicalDevice physicalDevice;
    VkSurfaceKHR surface;
    uint32_t *pPresentModeCount;
    VkPresentModeKHR *pPresentModes;
};

struct vkGetPhysicalDeviceSurfaceSupportKHR_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t queueFamilyIndex;
    VkSurfaceKHR surface;
    VkBool32 *pSupported;
};

struct vkGetPhysicalDeviceToolPropertiesEXT_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t *pToolCount;
    VkPhysicalDeviceToolPropertiesEXT *pToolProperties;
};

struct vkGetPhysicalDeviceWin32PresentationSupportKHR_params
{
    VkPhysicalDevice physicalDevice;
    uint32_t queueFamilyIndex;
};

struct vkGetPipelineCacheData_params
{
    VkDevice device;
    VkPipelineCache pipelineCache;
    size_t *pDataSize;
    void *pData;
};

struct vkGetPipelineExecutableInternalRepresentationsKHR_params
{
    VkDevice device;
    const VkPipelineExecutableInfoKHR *pExecutableInfo;
    uint32_t *pInternalRepresentationCount;
    VkPipelineExecutableInternalRepresentationKHR *pInternalRepresentations;
};

struct vkGetPipelineExecutablePropertiesKHR_params
{
    VkDevice device;
    const VkPipelineInfoKHR *pPipelineInfo;
    uint32_t *pExecutableCount;
    VkPipelineExecutablePropertiesKHR *pProperties;
};

struct vkGetPipelineExecutableStatisticsKHR_params
{
    VkDevice device;
    const VkPipelineExecutableInfoKHR *pExecutableInfo;
    uint32_t *pStatisticCount;
    VkPipelineExecutableStatisticKHR *pStatistics;
};

struct vkGetPrivateDataEXT_params
{
    VkDevice device;
    VkObjectType objectType;
    uint64_t objectHandle;
    VkPrivateDataSlotEXT privateDataSlot;
    uint64_t *pData;
};

struct vkGetQueryPoolResults_params
{
    VkDevice device;
    VkQueryPool queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
    size_t dataSize;
    void *pData;
    VkDeviceSize stride;
    VkQueryResultFlags flags;
};

struct vkGetQueueCheckpointData2NV_params
{
    VkQueue queue;
    uint32_t *pCheckpointDataCount;
    VkCheckpointData2NV *pCheckpointData;
};

struct vkGetQueueCheckpointDataNV_params
{
    VkQueue queue;
    uint32_t *pCheckpointDataCount;
    VkCheckpointDataNV *pCheckpointData;
};

struct vkGetRayTracingCaptureReplayShaderGroupHandlesKHR_params
{
    VkDevice device;
    VkPipeline pipeline;
    uint32_t firstGroup;
    uint32_t groupCount;
    size_t dataSize;
    void *pData;
};

struct vkGetRayTracingShaderGroupHandlesKHR_params
{
    VkDevice device;
    VkPipeline pipeline;
    uint32_t firstGroup;
    uint32_t groupCount;
    size_t dataSize;
    void *pData;
};

struct vkGetRayTracingShaderGroupHandlesNV_params
{
    VkDevice device;
    VkPipeline pipeline;
    uint32_t firstGroup;
    uint32_t groupCount;
    size_t dataSize;
    void *pData;
};

struct vkGetRayTracingShaderGroupStackSizeKHR_params
{
    VkDevice device;
    VkPipeline pipeline;
    uint32_t group;
    VkShaderGroupShaderKHR groupShader;
};

struct vkGetRenderAreaGranularity_params
{
    VkDevice device;
    VkRenderPass renderPass;
    VkExtent2D *pGranularity;
};

struct vkGetSemaphoreCounterValue_params
{
    VkDevice device;
    VkSemaphore semaphore;
    uint64_t *pValue;
};

struct vkGetSemaphoreCounterValueKHR_params
{
    VkDevice device;
    VkSemaphore semaphore;
    uint64_t *pValue;
};

struct vkGetShaderInfoAMD_params
{
    VkDevice device;
    VkPipeline pipeline;
    VkShaderStageFlagBits shaderStage;
    VkShaderInfoTypeAMD infoType;
    size_t *pInfoSize;
    void *pInfo;
};

struct vkGetSwapchainImagesKHR_params
{
    VkDevice device;
    VkSwapchainKHR swapchain;
    uint32_t *pSwapchainImageCount;
    VkImage *pSwapchainImages;
};

struct vkGetValidationCacheDataEXT_params
{
    VkDevice device;
    VkValidationCacheEXT validationCache;
    size_t *pDataSize;
    void *pData;
};

struct vkInitializePerformanceApiINTEL_params
{
    VkDevice device;
    const VkInitializePerformanceApiInfoINTEL *pInitializeInfo;
};

struct vkInvalidateMappedMemoryRanges_params
{
    VkDevice device;
    uint32_t memoryRangeCount;
    const VkMappedMemoryRange *pMemoryRanges;
};

struct vkMapMemory_params
{
    VkDevice device;
    VkDeviceMemory memory;
    VkDeviceSize offset;
    VkDeviceSize size;
    VkMemoryMapFlags flags;
    void **ppData;
};

struct vkMergePipelineCaches_params
{
    VkDevice device;
    VkPipelineCache dstCache;
    uint32_t srcCacheCount;
    const VkPipelineCache *pSrcCaches;
};

struct vkMergeValidationCachesEXT_params
{
    VkDevice device;
    VkValidationCacheEXT dstCache;
    uint32_t srcCacheCount;
    const VkValidationCacheEXT *pSrcCaches;
};

struct vkQueueBeginDebugUtilsLabelEXT_params
{
    VkQueue queue;
    const VkDebugUtilsLabelEXT *pLabelInfo;
};

struct vkQueueBindSparse_params
{
    VkQueue queue;
    uint32_t bindInfoCount;
    const VkBindSparseInfo *pBindInfo;
    VkFence fence;
};

struct vkQueueEndDebugUtilsLabelEXT_params
{
    VkQueue queue;
};

struct vkQueueInsertDebugUtilsLabelEXT_params
{
    VkQueue queue;
    const VkDebugUtilsLabelEXT *pLabelInfo;
};

struct vkQueuePresentKHR_params
{
    VkQueue queue;
    const VkPresentInfoKHR *pPresentInfo;
};

struct vkQueueSetPerformanceConfigurationINTEL_params
{
    VkQueue queue;
    VkPerformanceConfigurationINTEL configuration;
};

struct vkQueueSubmit_params
{
    VkQueue queue;
    uint32_t submitCount;
    const VkSubmitInfo *pSubmits;
    VkFence fence;
};

struct vkQueueSubmit2KHR_params
{
    VkQueue queue;
    uint32_t submitCount;
    const VkSubmitInfo2KHR *pSubmits;
    VkFence fence;
};

struct vkQueueWaitIdle_params
{
    VkQueue queue;
};

struct vkReleasePerformanceConfigurationINTEL_params
{
    VkDevice device;
    VkPerformanceConfigurationINTEL configuration;
};

struct vkReleaseProfilingLockKHR_params
{
    VkDevice device;
};

struct vkResetCommandBuffer_params
{
    VkCommandBuffer commandBuffer;
    VkCommandBufferResetFlags flags;
};

struct vkResetCommandPool_params
{
    VkDevice device;
    VkCommandPool commandPool;
    VkCommandPoolResetFlags flags;
};

struct vkResetDescriptorPool_params
{
    VkDevice device;
    VkDescriptorPool descriptorPool;
    VkDescriptorPoolResetFlags flags;
};

struct vkResetEvent_params
{
    VkDevice device;
    VkEvent event;
};

struct vkResetFences_params
{
    VkDevice device;
    uint32_t fenceCount;
    const VkFence *pFences;
};

struct vkResetQueryPool_params
{
    VkDevice device;
    VkQueryPool queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
};

struct vkResetQueryPoolEXT_params
{
    VkDevice device;
    VkQueryPool queryPool;
    uint32_t firstQuery;
    uint32_t queryCount;
};

struct vkSetDebugUtilsObjectNameEXT_params
{
    VkDevice device;
    const VkDebugUtilsObjectNameInfoEXT *pNameInfo;
};

struct vkSetDebugUtilsObjectTagEXT_params
{
    VkDevice device;
    const VkDebugUtilsObjectTagInfoEXT *pTagInfo;
};

struct vkSetDeviceMemoryPriorityEXT_params
{
    VkDevice device;
    VkDeviceMemory memory;
    float priority;
};

struct vkSetEvent_params
{
    VkDevice device;
    VkEvent event;
};

struct vkSetPrivateDataEXT_params
{
    VkDevice device;
    VkObjectType objectType;
    uint64_t objectHandle;
    VkPrivateDataSlotEXT privateDataSlot;
    uint64_t data;
};

struct vkSignalSemaphore_params
{
    VkDevice device;
    const VkSemaphoreSignalInfo *pSignalInfo;
};

struct vkSignalSemaphoreKHR_params
{
    VkDevice device;
    const VkSemaphoreSignalInfo *pSignalInfo;
};

struct vkSubmitDebugUtilsMessageEXT_params
{
    VkInstance instance;
    VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity;
    VkDebugUtilsMessageTypeFlagsEXT messageTypes;
    const VkDebugUtilsMessengerCallbackDataEXT *pCallbackData;
};

struct vkTrimCommandPool_params
{
    VkDevice device;
    VkCommandPool commandPool;
    VkCommandPoolTrimFlags flags;
};

struct vkTrimCommandPoolKHR_params
{
    VkDevice device;
    VkCommandPool commandPool;
    VkCommandPoolTrimFlags flags;
};

struct vkUninitializePerformanceApiINTEL_params
{
    VkDevice device;
};

struct vkUnmapMemory_params
{
    VkDevice device;
    VkDeviceMemory memory;
};

struct vkUpdateDescriptorSetWithTemplate_params
{
    VkDevice device;
    VkDescriptorSet descriptorSet;
    VkDescriptorUpdateTemplate descriptorUpdateTemplate;
    const void *pData;
};

struct vkUpdateDescriptorSetWithTemplateKHR_params
{
    VkDevice device;
    VkDescriptorSet descriptorSet;
    VkDescriptorUpdateTemplate descriptorUpdateTemplate;
    const void *pData;
};

struct vkUpdateDescriptorSets_params
{
    VkDevice device;
    uint32_t descriptorWriteCount;
    const VkWriteDescriptorSet *pDescriptorWrites;
    uint32_t descriptorCopyCount;
    const VkCopyDescriptorSet *pDescriptorCopies;
};

struct vkWaitForFences_params
{
    VkDevice device;
    uint32_t fenceCount;
    const VkFence *pFences;
    VkBool32 waitAll;
    uint64_t timeout;
};

struct vkWaitForPresentKHR_params
{
    VkDevice device;
    VkSwapchainKHR swapchain;
    uint64_t presentId;
    uint64_t timeout;
};

struct vkWaitSemaphores_params
{
    VkDevice device;
    const VkSemaphoreWaitInfo *pWaitInfo;
    uint64_t timeout;
};

struct vkWaitSemaphoresKHR_params
{
    VkDevice device;
    const VkSemaphoreWaitInfo *pWaitInfo;
    uint64_t timeout;
};

struct vkWriteAccelerationStructuresPropertiesKHR_params
{
    VkDevice device;
    uint32_t accelerationStructureCount;
    const VkAccelerationStructureKHR *pAccelerationStructures;
    VkQueryType queryType;
    size_t dataSize;
    void *pData;
    size_t stride;
};

#include "poppack.h"

#endif /* __WINE_VULKAN_LOADER_THUNKS_H */
