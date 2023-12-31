/**
 ******************************************************************************
 * @file       application.h
 * @author     Abdulrhman Bahaa
 * @brief      This header file includes header files from ecualA_layer and
 *             function declaration.
 * @date       2023-11-18
 ******************************************************************************
*/
#ifndef APPLICATION_H
#define	APPLICATION_H

/* Includes -----------------------------------------------------------------*/
#include "../ECUAL/char_lcd/ecual_char_lcd.h"
#include "../MCAL/eeprom/mcal_eeprom.h"

/* Macro Declarations -------------------------------------------------------*/

/* Macro Functions Declarations ---------------------------------------------*/

/* Data Type Declarations ---------------------------------------------------*/

/* Variables Declarations ---------------------------------------------------*/

/* Functions Declarations ---------------------------------------------------*/
/**
 * @brief       This function will include calls of functions to initialize 
 *              application's interfaces
 * @return      Returns E_OK(0x01) or E_NOT_OK(0x00) (succeeded and not succeeded)
*/
Std_ReturnType application_initialize(void);

#endif	/* APPLICATION_H */