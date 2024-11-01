#include "main.h"

#ifndef _SPI_H_
#define _SPI_H_

#define u8 uint8_t


//�����Գ���ʹ�õ���ģ��SPI�ӿ�����
//�����ɸ��Ľӿ�IO���ã�ʹ����������4 IO������ɱ���Һ��������ʾ
/******************************************************************************
�ӿڶ�����lcd.h�ڶ��壬����ݽ����޸Ĳ��޸���ӦIO��ʼ��LCD_GPIO_Init()
#define LCD_CTRL   	  	GPIOB		//����TFT���ݶ˿�
#define LCD_LED        	GPIO_Pin_9  //PB9 ������TFT -LED
#define LCD_RS         	GPIO_Pin_10	//PB10������TFT --RS
#define LCD_CS        	GPIO_Pin_11 //PB11 ������TFT --CS
#define LCD_RST     	GPIO_Pin_12	//PB12������TFT --RST
#define LCD_SCL        	GPIO_Pin_13	//PB13������TFT -- CLK
#define LCD_SDA        	GPIO_Pin_15	//PB15������TFT - SDI
*******************************************************************************/


//Һ�����ƿ���1�������궨��

#define	SPI_MOSI_SET  	 SDA_GPIO_Port->BSRR= SDA_Pin  
#define	SPI_SCLK_SET  	 SCL_GPIO_Port->BSRR= SCL_Pin   


//Һ�����ƿ���0�������궨��

#define	SPI_MOSI_CLR  	SDA_GPIO_Port->BSRR=(uint32_t)SDA_Pin << 16U    
#define	SPI_SCLK_CLR  	SCL_GPIO_Port->BSRR=(uint32_t)SCL_Pin << 16U 

void  SPIv_WriteData(u8 Data);

#endif
