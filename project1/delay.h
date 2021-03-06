#ifndef __DELAY_H_
#define __DELAY_H_

/****************************************Copyright (c)****************************************************
**
**--------------File Info---------------------------------------------------------------------------------
** File name:               delay.h
** Latest modified Date:    2017-5-14
** Latest Version:          
** Descriptions:           延时程序头文件
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


#include<8051.h>

/*********************************************************************************************************
** Function name:        delay100us   
** Descriptions:            延时100*number us
** input parameters:     想要设置的时间
** output parameters:       none
** Returned value:        none
*********************************************************************************************************/
extern void delay100us(unsigned int uiNumber);

#endif 

