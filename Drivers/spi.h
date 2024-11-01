#include "main.h"

#ifndef _SPI_H_
#define _SPI_H_

#define u8 uint8_t


//�����Գ���ʹ�õ���ģ��SPI�ӿ�����



//Һ�����ƿ���1�������궨��

#define	SPI_MOSI_SET  	 SDA_GPIO_Port->BSRR= SDA_Pin  
#define	SPI_SCLK_SET  	 SCL_GPIO_Port->BSRR= SCL_Pin   


//Һ�����ƿ���0�������궨��

#define	SPI_MOSI_CLR  	SDA_GPIO_Port->BSRR=(uint32_t)SDA_Pin << 16U    
#define	SPI_SCLK_CLR  	SCL_GPIO_Port->BSRR=(uint32_t)SCL_Pin << 16U 

void  SPIv_WriteData(u8 Data);

#endif