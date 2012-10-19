#ifndef ZEROBIT_H
#define ZEROBIT_H

using namespace std;
#define ULong unsigned long int  
#define ULONG_SIZE (sizeof(ULong)*8) 

#include <iostream>

ULong  ZeroBit(ULong  x);  //Replace the most significant non zero bit into zero bit
void ShowBinary(ULong x); //shows number in binary system

#endif