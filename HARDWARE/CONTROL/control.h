#ifndef _CONTROL_H
#define _CONTROL_H
#include "sys.h"
extern void PositionPID(void);
extern void lock(void);							//�ɿؼ���
extern void Unlock(void);						//�ɿؽ���
extern void Take_off(void);					//һ�����
extern void Land_down(void);					//����
extern void Start_Fixed_high(void);	//��������
extern void High_fix(void);
extern float pwm_X,pwm_Y;

void Outter_PID(void);
void Inner_PID(void);
#endif

