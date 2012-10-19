#include "ZeroBit.h"

ULong  ZeroBit(ULong  x)
{
	//shift to the right
	x |= (x >> 1); 
	x |= (x >> 2);
	x |= (x >> 4);
	x |= (x >> 8);
	x |= (x >> 16);
	x |= (x >> 32);
    
	return ((x & ~(x >> 1)))<<1; 
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