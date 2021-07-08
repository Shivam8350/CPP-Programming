#include<iostream>
using namespace std;

int Frequency(int iNo)
{
	int iDigit = 0,iCnt = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if((iDigit >= 3) && (iDigit <= 7))
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
	
	iRet = Frequency(iValue);
	cout<<"Frequency is : "<<iRet;
	
	return 0;
}