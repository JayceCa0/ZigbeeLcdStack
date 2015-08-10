#ifndef _OV7670_H
#define _OV7670_H
#include "sccb.h"

#define OV7670_WRST		P0_0		//дָ�븴λ
#define OV7670_RCK		P0_5		//������ʱ��
#define OV7670_RRST		P0_1  		//��ָ�븴λ
#define OV7670_CS		P0_6    	//Ƭѡ�ź�(OE)
#define OV7670_WREN		P0_4		//д��FIFOʹ��
#define OV7670_VSYNC  	        P2_0		//ͬ���źż��IO
															  					 
#define OV7670_DATA   		P1&0xFF	        //��������˿�
/////////////////////////////////////////									
	    				 
uint8   OV7670_Init(void);		  	   		 
void OV7670_Light_Mode(uint8 mode);
void OV7670_Color_Saturation(uint8 sat);
void OV7670_Brightness(uint8 bright);
void OV7670_Contrast(uint8 contrast);
void OV7670_Special_Effects(uint8 eft);
void OV7670_Window_Set(uint16 sx,uint16 sy,uint16 width,uint16 height);


#endif





















