/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
virtual void		destroyDevice						(VkDevice device, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void		getDeviceQueue						(VkDevice device, deUint32 queueFamilyIndex, deUint32 queueIndex, VkQueue* pQueue) const = 0;
virtual VkResult	queueSubmit							(VkQueue queue, deUint32 submitCount, const VkSubmitInfo* pSubmits, VkFence fence) const = 0;
virtual VkResult	queueWaitIdle						(VkQueue queue) const = 0;
virtual VkResult	deviceWaitIdle						(VkDevice device) const = 0;
virtual VkResult	allocateMemory						(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) const = 0;
virtual void		freeMemory							(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	mapMemory							(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) const = 0;
virtual void		unmapMemory							(VkDevice device, VkDeviceMemory memory) const = 0;
virtual VkResult	flushMappedMemoryRanges				(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const = 0;
virtual VkResult	invalidateMappedMemoryRanges		(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const = 0;
virtual void		getDeviceMemoryCommitment			(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) const = 0;
virtual VkResult	bindBufferMemory					(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) const = 0;
virtual VkResult	bindImageMemory						(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) const = 0;
virtual void		getBufferMemoryRequirements			(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) const = 0;
virtual void		getImageMemoryRequirements			(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) const = 0;
virtual void		getImageSparseMemoryRequirements	(VkDevice device, VkImage image, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) const = 0;
virtual VkResult	queueBindSparse						(VkQueue queue, deUint32 bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) const = 0;
virtual VkResult	createFence							(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const = 0;
virtual void		destroyFence						(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	resetFences							(VkDevice device, deUint32 fenceCount, const VkFence* pFences) const = 0;
virtual VkResult	getFenceStatus						(VkDevice device, VkFence fence) const = 0;
virtual VkResult	waitForFences						(VkDevice device, deUint32 fenceCount, const VkFence* pFences, VkBool32 waitAll, deUint64 timeout) const = 0;
virtual VkResult	createSemaphore						(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) const = 0;
virtual void		destroySemaphore					(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createEvent							(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) const = 0;
virtual void		destroyEvent						(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	getEventStatus						(VkDevice device, VkEvent event) const = 0;
virtual VkResult	setEvent							(VkDevice device, VkEvent event) const = 0;
virtual VkResult	resetEvent							(VkDevice device, VkEvent event) const = 0;
virtual VkResult	createQueryPool						(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) const = 0;
virtual void		destroyQueryPool					(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	getQueryPoolResults					(VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, deUintptr dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) const = 0;
virtual VkResult	createBuffer						(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) const = 0;
virtual void		destroyBuffer						(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createBufferView					(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) const = 0;
virtual void		destroyBufferView					(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createImage							(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) const = 0;
virtual void		destroyImage						(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void		getImageSubresourceLayout			(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) const = 0;
virtual VkResult	createImageView						(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) const = 0;
virtual void		destroyImageView					(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createShaderModule					(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule) const = 0;
virtual void		destroyShaderModule					(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createPipelineCache					(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) const = 0;
virtual void		destroyPipelineCache				(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	getPipelineCacheData				(VkDevice device, VkPipelineCache pipelineCache, deUintptr* pDataSize, void* pData) const = 0;
virtual VkResult	mergePipelineCaches					(VkDevice device, VkPipelineCache dstCache, deUint32 srcCacheCount, const VkPipelineCache* pSrcCaches) const = 0;
virtual VkResult	createGraphicsPipelines				(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const = 0;
virtual VkResult	createComputePipelines				(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const = 0;
virtual void		destroyPipeline						(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createPipelineLayout				(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) const = 0;
virtual void		destroyPipelineLayout				(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createSampler						(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) const = 0;
virtual void		destroySampler						(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createDescriptorSetLayout			(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) const = 0;
virtual void		destroyDescriptorSetLayout			(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createDescriptorPool				(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) const = 0;
virtual void		destroyDescriptorPool				(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	resetDescriptorPool					(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) const = 0;
virtual VkResult	allocateDescriptorSets				(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) const = 0;
virtual VkResult	freeDescriptorSets					(VkDevice device, VkDescriptorPool descriptorPool, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets) const = 0;
virtual void		updateDescriptorSets				(VkDevice device, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, deUint32 descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) const = 0;
virtual VkResult	createFramebuffer					(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) const = 0;
virtual void		destroyFramebuffer					(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createRenderPass					(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) const = 0;
virtual void		destroyRenderPass					(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void		getRenderAreaGranularity			(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) const = 0;
virtual VkResult	createCommandPool					(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) const = 0;
virtual void		destroyCommandPool					(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	resetCommandPool					(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) const = 0;
virtual VkResult	allocateCommandBuffers				(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) const = 0;
virtual void		freeCommandBuffers					(VkDevice device, VkCommandPool commandPool, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers) const = 0;
virtual VkResult	beginCommandBuffer					(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) const = 0;
virtual VkResult	endCommandBuffer					(VkCommandBuffer commandBuffer) const = 0;
virtual VkResult	resetCommandBuffer					(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) const = 0;
virtual void		cmdBindPipeline						(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) const = 0;
virtual void		cmdSetViewport						(VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkViewport* pViewports) const = 0;
virtual void		cmdSetScissor						(VkCommandBuffer commandBuffer, deUint32 firstScissor, deUint32 scissorCount, const VkRect2D* pScissors) const = 0;
virtual void		cmdSetLineWidth						(VkCommandBuffer commandBuffer, float lineWidth) const = 0;
virtual void		cmdSetDepthBias						(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) const = 0;
virtual void		cmdSetBlendConstants				(VkCommandBuffer commandBuffer, const float blendConstants[4]) const = 0;
virtual void		cmdSetDepthBounds					(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) const = 0;
virtual void		cmdSetStencilCompareMask			(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 compareMask) const = 0;
virtual void		cmdSetStencilWriteMask				(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 writeMask) const = 0;
virtual void		cmdSetStencilReference				(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 reference) const = 0;
virtual void		cmdBindDescriptorSets				(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 firstSet, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets, deUint32 dynamicOffsetCount, const deUint32* pDynamicOffsets) const = 0;
virtual void		cmdBindIndexBuffer					(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) const = 0;
virtual void		cmdBindVertexBuffers				(VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) const = 0;
virtual void		cmdDraw								(VkCommandBuffer commandBuffer, deUint32 vertexCount, deUint32 instanceCount, deUint32 firstVertex, deUint32 firstInstance) const = 0;
virtual void		cmdDrawIndexed						(VkCommandBuffer commandBuffer, deUint32 indexCount, deUint32 instanceCount, deUint32 firstIndex, deInt32 vertexOffset, deUint32 firstInstance) const = 0;
virtual void		cmdDrawIndirect						(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride) const = 0;
virtual void		cmdDrawIndexedIndirect				(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride) const = 0;
virtual void		cmdDispatch							(VkCommandBuffer commandBuffer, deUint32 x, deUint32 y, deUint32 z) const = 0;
virtual void		cmdDispatchIndirect					(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) const = 0;
virtual void		cmdCopyBuffer						(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferCopy* pRegions) const = 0;
virtual void		cmdCopyImage						(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageCopy* pRegions) const = 0;
virtual void		cmdBlitImage						(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageBlit* pRegions, VkFilter filter) const = 0;
virtual void		cmdCopyBufferToImage				(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkBufferImageCopy* pRegions) const = 0;
virtual void		cmdCopyImageToBuffer				(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferImageCopy* pRegions) const = 0;
virtual void		cmdUpdateBuffer						(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) const = 0;
virtual void		cmdFillBuffer						(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, deUint32 data) const = 0;
virtual void		cmdClearColorImage					(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const = 0;
virtual void		cmdClearDepthStencilImage			(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const = 0;
virtual void		cmdClearAttachments					(VkCommandBuffer commandBuffer, deUint32 attachmentCount, const VkClearAttachment* pAttachments, deUint32 rectCount, const VkClearRect* pRects) const = 0;
virtual void		cmdResolveImage						(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageResolve* pRegions) const = 0;
virtual void		cmdSetEvent							(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const = 0;
virtual void		cmdResetEvent						(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const = 0;
virtual void		cmdWaitEvents						(VkCommandBuffer commandBuffer, deUint32 eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const = 0;
virtual void		cmdPipelineBarrier					(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const = 0;
virtual void		cmdBeginQuery						(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query, VkQueryControlFlags flags) const = 0;
virtual void		cmdEndQuery							(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query) const = 0;
virtual void		cmdResetQueryPool					(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount) const = 0;
virtual void		cmdWriteTimestamp					(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, deUint32 query) const = 0;
virtual void		cmdCopyQueryPoolResults				(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) const = 0;
virtual void		cmdPushConstants					(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, deUint32 offset, deUint32 size, const void* pValues) const = 0;
virtual void		cmdBeginRenderPass					(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) const = 0;
virtual void		cmdNextSubpass						(VkCommandBuffer commandBuffer, VkSubpassContents contents) const = 0;
virtual void		cmdEndRenderPass					(VkCommandBuffer commandBuffer) const = 0;
virtual void		cmdExecuteCommands					(VkCommandBuffer commandBuffer, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers) const = 0;
virtual VkResult	createSwapchainKHR					(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) const = 0;
virtual void		destroySwapchainKHR					(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	getSwapchainImagesKHR				(VkDevice device, VkSwapchainKHR swapchain, deUint32* pSwapchainImageCount, VkImage* pSwapchainImages) const = 0;
virtual VkResult	acquireNextImageKHR					(VkDevice device, VkSwapchainKHR swapchain, deUint64 timeout, VkSemaphore semaphore, VkFence fence, deUint32* pImageIndex) const = 0;
virtual VkResult	queuePresentKHR						(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) const = 0;
virtual VkResult	createSharedSwapchainsKHR			(VkDevice device, deUint32 swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) const = 0;
virtual void		trimCommandPoolKHR					(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlagsKHR flags) const = 0;
virtual VkResult	getSwapchainStatusKHR				(VkDevice device, VkSwapchainKHR swapchain) const = 0;
virtual VkResult	debugMarkerSetObjectTagEXT			(VkDevice device, VkDebugMarkerObjectTagInfoEXT* pTagInfo) const = 0;
virtual VkResult	debugMarkerSetObjectNameEXT			(VkDevice device, VkDebugMarkerObjectNameInfoEXT* pNameInfo) const = 0;
virtual void		cmdDebugMarkerBeginEXT				(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT* pMarkerInfo) const = 0;
virtual void		cmdDebugMarkerEndEXT				(VkCommandBuffer commandBuffer) const = 0;
virtual void		cmdDebugMarkerInsertEXT				(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT* pMarkerInfo) const = 0;
virtual void		cmdDrawIndirectCountAMD				(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const = 0;
virtual void		cmdDrawIndexedIndirectCountAMD		(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const = 0;
virtual VkResult	getMemoryWin32HandleNV				(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, pt::Win32Handle* pHandle) const = 0;
virtual VkResult	getMemoryWin32HandleKHX				(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagBitsKHX handleType, pt::Win32Handle* pHandle) const = 0;
virtual VkResult	getMemoryFdKHX						(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagBitsKHX handleType, int* pFd) const = 0;
virtual VkResult	importSemaphoreWin32HandleKHX		(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHX* pImportSemaphoreWin32HandleInfo) const = 0;
virtual VkResult	getSemaphoreWin32HandleKHX			(VkDevice device, VkSemaphore semaphore, VkExternalSemaphoreHandleTypeFlagBitsKHX handleType, pt::Win32Handle* pHandle) const = 0;
virtual VkResult	importSemaphoreFdKHX				(VkDevice device, const VkImportSemaphoreFdInfoKHX* pImportSemaphoreFdInfo) const = 0;
virtual VkResult	getSemaphoreFdKHX					(VkDevice device, VkSemaphore semaphore, VkExternalSemaphoreHandleTypeFlagBitsKHX handleType, int* pFd) const = 0;
virtual void		cmdProcessCommandsNVX				(VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo) const = 0;
virtual void		cmdReserveSpaceForCommandsNVX		(VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo) const = 0;
virtual VkResult	createIndirectCommandsLayoutNVX		(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout) const = 0;
virtual void		destroyIndirectCommandsLayoutNVX	(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	createObjectTableNVX				(VkDevice device, const VkObjectTableCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkObjectTableNVX* pObjectTable) const = 0;
virtual void		destroyObjectTableNVX				(VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks* pAllocator) const = 0;
virtual VkResult	registerObjectsNVX					(VkDevice device, VkObjectTableNVX objectTable, deUint32 objectCount, const VkObjectTableEntryNVX* const* ppObjectTableEntries, const deUint32* pObjectIndices) const = 0;
virtual VkResult	unregisterObjectsNVX				(VkDevice device, VkObjectTableNVX objectTable, deUint32 objectCount, const VkObjectEntryTypeNVX* pObjectEntryTypes, const deUint32* pObjectIndices) const = 0;
virtual void		cmdPushDescriptorSetKHR				(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 set, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) const = 0;
virtual VkResult	createDescriptorUpdateTemplateKHR	(VkDevice device, const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplateKHR* pDescriptorUpdateTemplate) const = 0;
virtual void		destroyDescriptorUpdateTemplateKHR	(VkDevice device, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) const = 0;
virtual void		updateDescriptorSetWithTemplateKHR	(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const void* pData) const = 0;
virtual void		cmdPushDescriptorSetWithTemplateKHR	(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, VkPipelineLayout layout, deUint32 set, const void* pData) const = 0;
virtual VkResult	getRefreshCycleDurationGOOGLE		(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) const = 0;
virtual VkResult	getPastPresentationTimingGOOGLE		(VkDevice device, VkSwapchainKHR swapchain, deUint32* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings) const = 0;
