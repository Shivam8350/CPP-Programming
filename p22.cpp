#include<iostream>
using namespace std;

int EvenNumber(int iNo)
{
	int iDigit = 0,iCnt = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	iRet = EvenNumber(iValue);
	cout<<"Even Number is : "<<iRet;
	
	return 0;
}