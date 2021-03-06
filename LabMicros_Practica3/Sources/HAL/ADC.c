/*! **********************************************************************************************
* 2015  ITESM Campus Guadalajara. Laboratorio de Microcontroladores 
*  
*
* @file:      ADC.c
* @author(s):  
*
* @brief (Theory of Operation)
*
**************************************************************************************************/


/*************************************************************************************************/
/*********************						Includes						**********************/
/*************************************************************************************************/
#include "types.h"
#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "HAL\ADC_Driver.h"
/*************************************************************************************************/
/*********************						Defines							**********************/
/*************************************************************************************************/
#define REGISTER_SET_ZERO 0

/*************************************************************************************************/
/*********************						Typedefs						**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************					Function Prototypes					**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************                  Static Variables                    **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************					Global Variables					**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************                  Static Constants                    **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************                  Global Constants                    **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************				   Exported Functions					**********************/
/*************************************************************************************************/
char ADC_Read(void)
{

    ADCSC1= 0b00000110; /* pin 0 por default */

    while (ADCSC1_COCO==0) 
    {
		__RESET_WATCHDOG();	/* feeds the dog */
    }
    return (char)ADCRL;
}


void ADC_Init(void)
{
    ADCCFG=	REGISTER_SET_ZERO; /* Configures the ADC clock to 1M Hz, 8 bits, bus clck */
    ADCSC2= 0x80;
    APCTL1= 1 << ADC_CHANNEL;  /*Enables the control of ADC pin 0*/
}
/*************************************************************************************************/
/*********************				    Private Functions					**********************/
/*************************************************************************************************/

