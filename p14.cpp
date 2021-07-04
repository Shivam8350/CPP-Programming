/* 10
   18 - 37  (1 + 2 + 5 + 10)-(3+4+6+7+8+9)
   -19
   
*/

#include<iostream>
using namespace std;

int Summation(int iNo)
{
	int iCnt = 0,iSum1 = 0,iSum2 = 0;
	for(iCnt = 1;iCnt<=iNo;iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum1 = iSum1 + iCnt;
		}
		else
		{
			iSum2 = iSum2 + iCnt;
		}	
	}
	return iSum1 - iSum2;
}

int main()
{
	int iValue = 0,Ret = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	Ret = Summation(iValue);
	cout<<"Difference is :\n"<<Ret;
	
	return 0;
}