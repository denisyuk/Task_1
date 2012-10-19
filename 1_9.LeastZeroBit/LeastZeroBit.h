#ifndef LEASTZEROBIT_H
#define LEASTZEROBIT_H

using namespace std;
#define ULong unsigned long int  
#define ULONG_SIZE (sizeof(ULong)*8) 

#include <iostream>

ULong  LeastZeroBit(ULong  x);  //sets the least significant zero-bit
void ShowBinary(ULong x); //shows number in binary system

#endif