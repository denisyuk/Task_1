#ifndef LONGBYBIT_H
#define LONGBYBIT_H

using namespace std;
#define ULong unsigned long int  
#define ULONG_SIZE (sizeof(ULong)*8) 

#include <iostream>

ULong  ULongByBit(ULong  x);  //Finds least sagnificant non zero bit
void ShowBinary(ULong x); //shows number in binary system

#endif