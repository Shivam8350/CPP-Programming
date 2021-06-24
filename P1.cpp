#include<iostream>
using namespace std;

int Power(int iNo1,int iNo2)
{
	int iCnt = 0;
	int iMul = 1;
	if(iNo1<0)
	{	iNo1 = -iNo1;	}
	if(iNo2 < 0)
	{	iNo2 = -iNo2;	}
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMul = iMul*iNo1;
	}
	return iMul;
}
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;
	
	cout<<"Enter First Number\n";
	cin>>iValue1;
	
	cout<<"Enter Second Number\n";
	cin>>iValue2;
	
	iRet = Power(iValue1,iValue2);
	cout<<"Result is : "<<iRet<<"\n";
	
}