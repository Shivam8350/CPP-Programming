/* Accept Number from user and return Reverse Number
Input  :  7521
Output :  1257
Input  :  4502
Output :  2054
Input  :  7500
Output :  57
*/
#include<iostream>
using namespace std;

int Reverse(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo/10;
	}
	return iRev;
}
int main()
{
	int iValue = 0;
	int Ret = 0;

	cout<<"Enter Number\n";
	cin>>iValue;
	
	Ret = Reverse(iValue);
	cout<<"Reverse Number is :"<<Ret;
	return 0;
	
}