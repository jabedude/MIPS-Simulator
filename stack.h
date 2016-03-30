#ifndef STACK_HEADER
#define STACK_HEADER

#include "registers.h"

//Note: MIPS does not have push/pop instructions.
//The only instructions that interact with memory
//are load and store operations.
//Using this as my reference:
//https://www.cs.bu.edu/teaching/c/stack/array/
//MIPS supports 32bit instructions so I will be
//implementing this stack as an array of longs


struct reg sp;
sp.name  = "$sp";
sp.value = 0x7fffeffc;


#endif //Thats all!
