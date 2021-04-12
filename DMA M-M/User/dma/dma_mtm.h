#ifndef   __DMA_MTM_H
#define   __DMA_MTM_H

#include "stm32f10x.h"
// Ҫ���͵����ݴ�С
#define BUFFER_SIZE     32
#define MTM_DMA_CLK RCC_AHBPeriph_DMA1
#define MTM_DMA_CHANNEL DMA1_Channel6

void MtM_DMA_Config(void);
uint8_t Buffercmp(const uint32_t* pBuffer, uint32_t* pBuffer1, uint16_t BufferLength);

#endif /* __DMA_MTM_H */
