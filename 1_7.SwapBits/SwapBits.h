#ifndef SWAPBIT_H
#define SWAPBIT_H

using namespace std;
#define ULong unsigned long int  
#define ULONG_SIZE (sizeof(ULong)*8) 

#include <iostream>

ULong  SwapBits(ULong  x);  //swaps neighboring bits
void ShowBinary(ULong x); //shows number in binary system

#endif