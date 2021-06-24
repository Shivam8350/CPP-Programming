/*Accept Number from User and return Even Digits
Input : 4521
Output : 2

Input : 8642
Output : 4

input : 7139
output : 0
*/

#include<iostream>
using namespace std;

int EvenNo(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
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
	int iValue = 0,Ret = 0;
	
	cout<<"Enter Number"<<"\n";
	cin>>iValue;
	
	Ret = EvenNo(iValue);
	
	cout<<"Even Digits is : "<<Ret;
	
	return 0;
	
}