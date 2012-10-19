#include "MaxFunc.h"

void main()
{
	SLong EnterNum, Result; //EnterNum - would be entered from keyboard
							//Result - null or x
	cout<<"Please, enter signed lond integer number: ";
		cin >> EnterNum; //Entering number

	Result = NullMax(EnterNum); //call function and return Null or Number

	ShowBinary(EnterNum); //show result in binary system
	  
	cout<<endl<<"Result: "<<Result<<endl;

	system("pause");
}