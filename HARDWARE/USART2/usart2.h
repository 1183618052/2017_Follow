#ifndef __USART2_H
#define __USART2_H

#include "sys.h"
	  	
extern u8  USART2_RX_BUF[]; //���ջ���,���USART_REC_LEN���ֽ�. 
extern u8  USART2_Flage;								//������ɱ�־
#define USART_REC_LEN  			200  	//�����������ֽ��� 200
#define EN_USART2_RX 			1		//ʹ�ܣ�1��/��ֹ��0������1����
	  	
extern u8  USART_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART_RX_STA;         		//����״̬���	
void uart2_init(u32 bound);
#endif	   
