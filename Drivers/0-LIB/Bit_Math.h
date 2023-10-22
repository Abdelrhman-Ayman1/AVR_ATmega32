/*
 * Author:Abdelrhman Ayman
 * Version:v1
 * created:20/10/2023
 * Description:Bit math
 */


#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_

#define SET_BIT(REG , Bit_num)        REG|=(1<<Bit_num)
#define CLR_BIT(REG , Bit_num)        REG&=(~(1<<Bit_num))
#define TOGGLE_BIT(REG , Bit_num)     REG^=(1<<Bit_num)
#define GET_BIT(REG , Bit_num)        ((REG>>Bit_num)&1)
#define SET_BYTE(Byte , value)        Byte=value



#endif /* LIB_BIT_MATH_H_ */
