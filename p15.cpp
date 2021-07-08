#include<iostream>
#include<stdbool.h>
using namespace std;

bool Checkzero(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	if(iNo < 0)
	{iNo = -iNo;}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
		iNo = iNo / 10;
    }
}

int main()
{
	int iValue = 0;
	bool bret;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	bret = Checkzero(iValue);
	if(bret == true)
	{
		cout<<"There is Zero\n";
	}
	else
	{
		cout<<"There is no Zero\n";
	}
	
	return 0;
}
