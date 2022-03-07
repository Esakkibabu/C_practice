# https://www.onlinegdb.com/online_c_compiler#


https://docs.google.com/presentation/d/12II3TU8vpZ0Iu-PQ8oTz6K4KzJYBV4bb/edit?usp=sharing&ouid=111079136174407944829&rtpof=true&sd=true


#include  <stm32l1xx.h>


GPIO_InitTypeDef GPIOB_Init;															// Declaration 

int main()
{
	
		//************   RCC ***************//
			RCC_MSICmd(ENABLE);																	// Enabling MSI
			RCC_SYSCLKConfig(RCC_SYSCLKSource_MSI); 						// Choosing the Clock
			RCC_MSIRangeConfig(RCC_MSIRange_5);									// Choosing the frequency   2MHz
			RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB,ENABLE); 	// Enabling GPIOB
		//**********************************//
	
		//************GPIO******************//
			GPIO_Init.GPIO_Mode=GPIO_Mode_OUT;									// Operating Mode for selected pin
			GPIO_Init.GPIO_Pin=GPIO_Pin_6;											// Configuring Pin 6 for LED Blue
			GPIO_Init(GPIOB,&GPIOB_Init);												// Congiguration of GPIOB
		//*********************************//
	
		while(1)
		{
				GPIO_ToggleBits(GPIOB,GPIO_Pin_6);
				delay(100);
		}
		
	}



//program to create a static thread to toggles the on board    green led continuously with delay of 1sec //
#include "ch.h"
#include "hal.h"

WORKING_AREA(thd1,12);																				//Mapped Memory area 
static msg_t THD_FN1(void *arg)
{
		while(TRUE)
	{
			palTogglePad(GPIOB,GPIOB_LED3);
			chThdSleepMilliseconds(1000);
	}
}

/*Write your application code here */
int main()
{

halInit();																											// API Initialization for Hardware
chSysInit();																										// API Initialization for Software
chThdCreateStatic(&thd1,sizeof(thd1),NORMALPRIO,THD_FN1,NULL);	// Thread Creation  
		
}
