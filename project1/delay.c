/****************************************Copyright (c)****************************************************
**
**--------------File Info---------------------------------------------------------------------------------
** File name:               delay.c
** Latest modified Date:    2017-5-14
** Latest Version:          
** Descriptions:           延时程序实现文件
**
**--------------------------------------------------------------------------------------------------------
** Created by:              jsj
** Created date:            2017-5-14
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


/*********************************************************************************************************
** Function name:        delay100us   
** Descriptions:            延时100*number us
** input parameters:     想要设置的时间
** output parameters:       none
** Returned value:        none
*********************************************************************************************************/

void delay100us(unsigned int uiNumber)
{
	unsigned char i;
	do{
		i=46;
		do{
		}while(--i!=0);
	}while(--uiNumber!=0);
}


