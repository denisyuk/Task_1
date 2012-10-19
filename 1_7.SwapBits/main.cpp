#include "SwapBits.h"

void main()
{
	ULong EnterNum, Result; //EnterNum - would be entered from keyboard
							//Result - would be calculated by least significant bit
	cout<<"Please, enter unsigned lond integer number: ";
		cin >> EnterNum; //Entering number

	Result = SwapBits(EnterNum);

	ShowBinary(EnterNum); //show entered number in binary system
	ShowBinary(Result); //show result in binary system

	cout<<endl<<"Result: "<<Result<<endl;

	system("pause");
}