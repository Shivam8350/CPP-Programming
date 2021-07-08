#include<iostream>
using namespace std;

int CountTwo(int iNo)
{
	int iDigit = 0,iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit =  iNo % 10;
		if(iDigit == 2)
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
	
	iRet = CountTwo(iValue);
	cout<<"The Count of Two is : "<<iRet;
	
	return 0;
}