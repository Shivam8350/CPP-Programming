/*Accept Number from User and return Addition of all that Number
Input : 7521
Output :15  (7+5+2+1)
*/
#include<iostream>
using namespace std;

int Addition(int iNo)
{
	int Digit = 0;
	int iSum = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		Digit = iNo%10;
		iSum = iSum + Digit;
		iNo = iNo / 10;
	}
	return iSum;
}
int main()
{
	int iValue = 0,Ret = 0;
	
	cout<<"Enter Number"<<"\n";
	cin>>iValue;
	
	Ret = Addition(iValue);
	cout<<"Addition Is : "<<Ret;	
	return 0;
}