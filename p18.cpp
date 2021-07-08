/*Input : 89451
  Output : 8 (9-1)
  input  : 5672
  Output : 5( 7 -2)
*/

#include<iostream>
using namespace std;

int MinMax(int iNo)
{
	int iMax = 0,iMin = 9;
	int iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}
		iNo = iNo / 10;
	}
	return iMax - iMin;
}
int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	iRet = MinMax(iValue);
	cout<<"MinMax Subtraction is : "<<iRet;
	
	return 0;
}