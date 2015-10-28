/*! **********************************************************************************************
* 2015  ITESM Campus Guadalajara. Laboratorio de Microcontroladores 
*  
*
* @file:      main.c
* @author(s):  
*
* @brief (Theory of Operation)
*
**************************************************************************************************/

#include <hidef.h> 					/* for EnableInterrupts macro */
#include "derivative.h" 			/* include peripheral declarations */
#include "types.h" 					/*Include data types */
#include "HIL\MOTORPORT_String.h"	/**/
#include "HIL\Stepper_Manager.h"	/**/
#include "HIL\Speed_Manager.h"		/**/
#include "HIL\Direction_Manager.h"	/**/


void main(void) 
{
	
