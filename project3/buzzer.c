/****************************************Copyright (c)****************************************************
**
**--------------File Info---------------------------------------------------------------------------------
** File name:               buzzer.c
** Latest modified Date:    2017-5-12
** Latest Version:          
** Descriptions:            ����������ʵ���ļ�
**
**--------------------------------------------------------------------------------------------------------
** Created by:              jsj
** Created date:            2017-5-12
** Version:                 
** Descriptions:            
**
**--------------------------------------------------------------------------------------------------------
*--------------------------------------------------------------------------------------------------------
** Modified by:
** Modified date:
** Version:
** Descriptions:
**
*********************************************************************************************************/

#include"buzzer.h"


/*********************************************************************************************************
** Function name:           buzzerInit
** Descriptions:             ��������ʼ��
** input parameters:      none
** output parameters:       char
** Returned value:      0------��ʼ���ɹ�
                                 -1----��ʼ��ʧ��
*********************************************************************************************************/
char buzzerInit()
{
	return 0;
}


/*********************************************************************************************************
** Function name:           buzzerSpecialHzTweet
** Descriptions:            ���������ض���Ƶ������
** input parameters:      uiSpecialHzLevel���ض������еȼ�
** output parameters:       none
** Returned value:     
*****************************************************void****************************************************/
void buzzerSpecialHzTweet(unsigned char ucSpecialHzLevel)
{
	unsigned int i;
	if (ucSpecialHzLevel==0)
		return;
	
	for(i=0;i<15000/(ucSpecialHzLevel*10);i++){
			BUZZER_PIN=!BUZZER_PIN;
			}
			
	
}