#ifndef __USART3_H
#define __USART3_H

#include "sys.h"
	  	
extern u8  USART3_RX_BUF[]; 			//���ջ���,���USART_REC_LEN���ֽ�. 
extern u8  USART3_Flage;				//������ɱ�־
#define USART_REC_LEN  			200  	//�����������ֽ��� 200
#define EN_USART3_RX 			1		//ʹ�ܣ�1��/��ֹ��0������1����
	  	
extern u8  USART_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART_RX_STA;         		//����״̬���	
void uart3_init(u32 bound);
#endif	   
