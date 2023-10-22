/*
 * SEVEN_SEGMENT_program.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Abdelrhman22
 */


#include "STD_TYPES.h"
#include "Bit_Math.h"
#include "DIO_interface.h"
#include "SEVEN_SEGMENT_interface.h"

void seven_Segment_Init(u8 copy_u8port)
{
	switch(copy_u8port)
	{
	case PortA_ID:DIO_voidSetPortDirection(PortA_ID,0xff);break;
	case PortB_ID:DIO_voidSetPortDirection(PortB_ID,0xff);break;
	case PortC_ID:DIO_voidSetPortDirection(PortC_ID,0xff);break;
	case PortD_ID:DIO_voidSetPortDirection(PortD_ID,0xff);break;
	default:          break;
	}
}


void seven_segment_DisplayNum(u8 copy_u8Type ,u8 copy_u8port,u8 copy_u8DisNum)
{
	if(copy_u8Type==Cathode)
	{
		switch(copy_u8DisNum)
		{
		case 0: DIO_voidSetPortValue(copy_u8port,0b00111111);break;
		case 1: DIO_voidSetPortValue(copy_u8port,0b00000110);break;
		case 2: DIO_voidSetPortValue(copy_u8port,0b01011011);break;
		case 3: DIO_voidSetPortValue(copy_u8port,0b01001111);break;
		case 4: DIO_voidSetPortValue(copy_u8port,0b01100110);break;
		case 5: DIO_voidSetPortValue(copy_u8port,0b01101101);break;
		case 6: DIO_voidSetPortValue(copy_u8port,0b01111101);break;
		case 7: DIO_voidSetPortValue(copy_u8port,0b00000111);break;
		case 8: DIO_voidSetPortValue(copy_u8port,0b01111111);break;
		case 9: DIO_voidSetPortValue(copy_u8port,0b01101111);break;
		default:          break;

		}
	}
	else if(copy_u8Type==Anode)
	{
		switch(copy_u8DisNum)
		{
			case 0: DIO_voidSetPortValue(copy_u8port,~(0b00111111));break;
			case 1: DIO_voidSetPortValue(copy_u8port,~(0b00000110));break;
			case 2: DIO_voidSetPortValue(copy_u8port,~(0b01011011));break;
			case 3: DIO_voidSetPortValue(copy_u8port,~(0b01001111));break;
			case 4: DIO_voidSetPortValue(copy_u8port,~(0b01100110));break;
			case 5: DIO_voidSetPortValue(copy_u8port,~(0b01101101));break;
			case 6: DIO_voidSetPortValue(copy_u8port,~(0b01111101));break;
			case 7: DIO_voidSetPortValue(copy_u8port,~(0b00000111));break;
			case 8: DIO_voidSetPortValue(copy_u8port,~(0b01111111));break;
			case 9: DIO_voidSetPortValue(copy_u8port,~(0b01101111));break;
			default:          break;

		}
	}
}



