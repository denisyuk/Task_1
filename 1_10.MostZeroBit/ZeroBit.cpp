#include "ZeroBit.h"

ULong  ZeroBit(ULong  x)
{
	ULong res = x; //saves value X in temporary value res

	x |= (x >> 1);
	x |= (x >> 2);
	x |= (x >> 4);
	x |= (x >> 8);
	x |= (x >> 16);
	x |= (x >> 32);
    
	return res | (((x & ~(x >> 1)))<<1); //Replace the most significant non zero bit into zero bit
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