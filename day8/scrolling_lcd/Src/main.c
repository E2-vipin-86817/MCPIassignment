/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <my_Icd_i2c.h>

int main(void)
{
	int ret;
	char str[32] = "Vipin Singh";
	SystemInit();

	ret = Lcd_Init();
	while(1){
		if(ret){
			Lcd_Puts(LCD_LINE1, str);
			for(int i = 0; i<=18 ;i++){
			Lcd_Scroll();
			DelayMs(450);
			}
		}
	}
	return 0;
}





















