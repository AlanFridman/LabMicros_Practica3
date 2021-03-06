/*! **********************************************************************************************
* 2015  ITESM Campus Guadalajara. Laboratorio de Microcontroladores 
*
*
* @file:      MTIM.h
* @author(s):  Hector Manuel milan
*
* @brief (User's Manual)
*
**************************************************************************************************/

#ifndef MTIM_H_
#define MTIM_H_

#include "derivative.h" /* include peripheral declarations */

/*************************************************************************************************/
/*********************						Includes						**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************						Defines							**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************						Typedefs						**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************			 	 Functions Like Macros					**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************					Extern Variables					**********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************                  Extern Constants                    **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************					Function Prototypes					**********************/
/*************************************************************************************************/
/*!*-----------------------------------------------------------------------------------------------
* \name     delay_us_MTIM
* \brief    Do a delay in the program of 'x' number of u seconds. 
* \param    u16 tiempo_us
* \return   void
-------------------------------------------------------------------------------------------------*/

void delay_us_MTIM(unsigned short u16tiempo_us);

/*************************************************************************************************/
#endif /* MTIM_H_ */
