// Input :  75845       5
// Output :     2
// Input : 89562        1
// Output :      0

#include<iostream>
using namespace std;

int DigitFrequency(int iNo1,int iNo2)
{
	int iDigit = 0;
	int iCnt = 0;
	if(iNo1 < 0)
    {iNo1 = -iNo1; }
    if((iNo2 < 0)||(iNo2 > 9))
    {
        cout<<"Invalid digit"<<"\n";
        return 0;
    }
	while(iNo1 > 0)
	{
		iDigit = iNo1 % 10;
		if(iDigit == iNo2)
		{
			iCnt++;
		}
		iNo1 = iNo1 / 10;
	}
	return iCnt;
}
int main()
{
	int iValue1 = 0,iValue2=0,Ret = 0;
	
	cout<<"Enter Number"<<"\n";
	cin>>iValue1;
	
	cout<<"Enter Serach Number"<<"\n";
	cin>>iValue2;
	
	Ret = DigitFrequency(iValue1,iValue2);
	
	cout<<"Frequency of Digit is : "<<Ret;
	
	
	return 0;
	
}