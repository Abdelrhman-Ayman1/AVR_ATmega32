/*
 * DIO_program.c
 *
 *  Created on: Oct 20, 2023
 *      Author: Abdelrhman22
 */
#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"
#include "STD_TYPES.h"
#include "Bit_Math.h"


void DIO_voidSetPortDirection(u8 copy_u8PortID ,u8 copy_u8PortDirection)
{
		switch(copy_u8PortID)
		{
			case PortA_ID: DDRA=copy_u8PortDirection; break;
			case PortB_ID: DDRB=copy_u8PortDirection; break;
			case PortC_ID: DDRC=copy_u8PortDirection; break;
			case PortD_ID: DDRD=copy_u8PortDirection; break;

		}
}

	void DIO_voidSetPortValue(u8 copy_u8PortID,u8 copy_u8PortValue)
	{
		switch(copy_u8PortID)
		{
		case PortA_ID: PORTA=copy_u8PortValue;break;
		case PortB_ID: PORTB=copy_u8PortValue;break;
		case PortC_ID: PORTC=copy_u8PortValue;break;
		case PortD_ID: PORTD=copy_u8PortValue;break;

		}
	}
	void DIO_voidSetPinDirection(u8 copy_u8PortID,u8 copy_u8PinID,u8 copy_u8PinDirection)
	{
		if (copy_u8PinID >= PIN0 && copy_u8PinID <= PIN7)
		{
			if(copy_u8PinDirection == PIN_OUTPUT)
			{
				switch(copy_u8PortID)
				{

				case PortA_ID: SET_BIT(DDRA,copy_u8PinID); break;
				case PortB_ID: SET_BIT(DDRB,copy_u8PinID); break;
				case PortC_ID: SET_BIT(DDRC,copy_u8PinID); break;
				case PortD_ID: SET_BIT(DDRD,copy_u8PinID); break;
				default: //no code
					break;

				}
			}
			else
			{
					switch(copy_u8PortID)
					{
					case PortA_ID: CLR_BIT(DDRA,copy_u8PinID); break;
					case PortB_ID: CLR_BIT(DDRB,copy_u8PinID); break;
					case PortC_ID: CLR_BIT(DDRC,copy_u8PinID); break;
					case PortD_ID: CLR_BIT(DDRD,copy_u8PinID); break;
					default://no code
						break;
					}
			}
		}

	}
	void DIO_voidSetPinvalue(u8 copy_u8PortID,u8 copy_u8PinID ,u8 copy_u8PinValue)
	{
		if(copy_u8PinValue==0)
		{
			switch(copy_u8PortID)
			{
			case PortA_ID : CLR_BIT(PORTA , copy_u8PinID); break;
			case PortB_ID : CLR_BIT(PORTB , copy_u8PinID); break;
			case PortC_ID : CLR_BIT(PORTC , copy_u8PinID); break;
			case PortD_ID : CLR_BIT(PORTD , copy_u8PinID); break;

			}
		}
		else if (copy_u8PinValue==1)
		{
			switch(copy_u8PortID)
			{
			case PortA_ID : SET_BIT(PORTA , copy_u8PinID); break;
			case PortB_ID : SET_BIT(PORTB , copy_u8PinID); break;
			case PortC_ID : SET_BIT(PORTC , copy_u8PinID); break;
			case PortD_ID : SET_BIT(PORTD , copy_u8PinID); break;

			}
		}
	}
	u8 DIO_u8GetPinValue(u8 copy_u8PortID,u8 copy_u8PinID)
	{
		u8 Local_u8Result;
		switch(copy_u8PortID)
		{
		case PortA_ID : Local_u8Result = GET_BIT(PINA , copy_u8PinID); break;
		case PortB_ID : Local_u8Result = GET_BIT(PINB , copy_u8PinID); break;
		case PortC_ID : Local_u8Result = GET_BIT(PINC , copy_u8PinID); break;
		case PortD_ID : Local_u8Result = GET_BIT(PIND , copy_u8PinID); break;

		}

		return Local_u8Result;
	}

	void DIO_voidTogglePin(u8 copy_u8PortID,u8 copy_u8PinID)
	{
		switch(copy_u8PortID)
		{
		case PortA_ID:TOGGLE_BIT(PORTA,copy_u8PinID); break;
		case PortB_ID:TOGGLE_BIT(PORTB,copy_u8PinID); break;
		case PortC_ID:TOGGLE_BIT(PORTC,copy_u8PinID); break;
		case PortD_ID:TOGGLE_BIT(PORTD,copy_u8PinID); break;

		}
	}



