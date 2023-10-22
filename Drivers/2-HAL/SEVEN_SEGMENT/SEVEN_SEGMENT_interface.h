/*
 * SEVEN_SEGMENT_interface.h
 *
 *  Created on: Oct 21, 2023
 *      Author: Abdelrhman22
 */

#ifndef SEVEN_SEGMENT_INTERFACE_H_
#define SEVEN_SEGMENT_INTERFACE_H_

#define Anode     1
#define Cathode   0


void seven_Segment_Init(u8 copy_u8port);
void seven_segment_DisplayNum(u8 copy_u8Type,u8 copy_u8port,u8 copy_u8DisNum);

#endif /* SEVEN_SEGMENT_INTERFACE_H_ */
