#include "LeastZeroBit.h"

ULong  LeastZeroBit(ULong  x)
{
	return x |= x+1UL; //sets the least significant zero-bit in one
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