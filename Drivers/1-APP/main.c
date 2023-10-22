/*
 * main.c
 *
 *  Created on: Oct 22, 2023
 *      Author: Abdelrhman22
 */


#include "STD_TYPES.h"
#include "Bit_Math.h"
#include "DIO_interface.h"
#include "SEVEN_SEGMENT_interface.h"
#include <util/delay.h>


int main(void)
{
	seven_Segment_Init(PortA_ID);
	while(1)
	{
	_delay_ms(100);
	seven_segment_DisplayNum(Cathode,PortA_ID,3);
	_delay_ms(100);

	}

}
