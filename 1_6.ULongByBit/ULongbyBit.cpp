#include "ULongbyBit.h"

ULong  ULongByBit(ULong  x)
{
	return (~(x-1UL))&x; //finds least sagnificant non zero bit
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