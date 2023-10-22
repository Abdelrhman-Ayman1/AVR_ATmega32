/*
 * Author:Abdelrhman Ayman
 * Version:v1
 * created:20/10/2023
 * Description:DIO interface
 */

#include "STD_TYPES.h"
#include "Bit_Math.h"

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

/*Prototypes*/

void DIO_voidSetPortDirection(u8 copy_u8PortID ,u8 copy_u8PortDirection);
void DIO_voidSetPortValue(u8 copy_u8PortID,u8 copy_u8PortValue);
void DIO_voidSetPinDirection(u8 copt_u8PortID,u8 copy_u8PinID,u8 copy_u8PinDirection);
void DIO_voidSetPinvalue(u8 copy_u8PortID,u8 copy_u8PinID ,u8 copy_u8PinValue);
u8 DIO_u8GetPinValue(u8 copy_u8PortID,u8 copy_u8PinID);
void DIO_voidTogglePin(u8 copy_u8PortID,u8 copy_u8PinID);


#define PortA_ID		1
#define PortB_ID		2
#define PortC_ID		3
#define PortD_ID		4

#define PIN0       0
#define PIN1       1
#define PIN2       2
#define PIN3       3
#define PIN4       4
#define PIN5       5
#define PIN6       6
#define PIN7       7


#define PIN_OUTPUT         0
#define PIN_INPUT          1


#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
