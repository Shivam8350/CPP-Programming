#include<iostream>
using namespace std;

int Mult(int iNo)
{
	int iDigit = 0,iMult = 1;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;
	}
	return iMult;
}
int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	iRet = Mult(iValue);
	cout<<"Multiplication is : "<<iRet;
	
	return 0;
}