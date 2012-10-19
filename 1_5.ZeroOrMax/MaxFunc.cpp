#include "MaxFunc.h"

SLong  NullMax(SLong  x)
{
	return ((x>>31)^(LLONG_MIN-1))&x; //if received parametr x > 0 then returned value will be x, else - null
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