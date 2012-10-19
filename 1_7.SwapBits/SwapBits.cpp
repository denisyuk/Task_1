#include "SwapBits.h"

ULong  SwapBits(ULong  x) //swaps neighboring bits
{
	ULong mask, a, b;

	mask = 0xAAAAAAAA; //mask (in rotation One - Zero - One - Zero...)1010 1010 1010 1010 ...ect

	a = (x & mask) >> 1; //apllies mask for first group of bits
	b = (x & (mask>>1)) << 1; //applies mask for another group of bits
	return (a | b); 
}

void ShowBinary(ULong x)
{
	cout<<"Binary ("<<x<<"): ";

	ULong i = ULONG_SIZE;
	do
	{
		--i;
		cout<<((x >> i) & 1);
	}
	while(i > 0);
	cout<<"\n";
}