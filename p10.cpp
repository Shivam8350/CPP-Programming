/* Accept Number from user and return Multiplication of digit
Input  :  7521
Output :  70
Input  :  4502
Output :  40
*/
#include<iostream>
using namespace std;

int Mult(int iNo)
{
	int iMult = 1;
	int iCnt = 0;
	int iDigit = 0;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit !=0)
		{
			iMult = iMult * iDigit;
		}
		iNo = iNo / 10;
	}
	return iMult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter Number"<<"\n";
	cin>>iValue;
	
	iRet = Mult(iValue);
	cout<<"Multiplication of Digit :" <<"\n"<<iRet;
	
	return 0;
}