#include<iostream>
using namespace std;

int Fact(int iNo)
{
	int iCnt = 0,iMul = 1;
	if(iNo < 0)
	{	iNo = -iNo;	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iMul = iMul*iCnt;
	}
	return iMul;
	
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	iRet = Fact(iValue);
	cout<<"Factorial is :"<<iRet<<"\n";
	
	return 0;
	
}