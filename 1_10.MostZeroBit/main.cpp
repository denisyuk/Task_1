#include "ZeroBit.h"

void main()
{
	ULong EnterNum, Result; //EnterNum - would be entered from keyboard
							//Result - would be calculated by the most significant Zero bit
	cout<<"Please, enter unsigned lond integer number: ";
		cin >> EnterNum; //Entering number

	Result = ZeroBit(EnterNum);

	ShowBinary(EnterNum); //show entered number in binary system
	ShowBinary(Result); //show result in binary system

	cout<<endl<<"Result: "<<Result<<endl;

	system("pause");
}