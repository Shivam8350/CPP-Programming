//Calculate Sum of Even Elements from array

#include<iostream>
using namespace std;

int SumEven(int arr[],int iSize)
{
	int i = 0,iSum = 0;

	for(i = 0;i<iSize;i++)
	{
		if(arr[i] % 2 == 0)
		{
			iSum = iSum + arr[i];
		}
	}
	return iSum;
}
int main()
{
	int *arr = 0;
	int iValue = 0,i = 0;
	int iRet = 0;
	
	cout<<"Enter Number of Elements\n";
	cin>>iValue;
	
	arr = new int(iValue);
	
	cout<<"Enter Elements \n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	iRet = SumEven(arr,iValue);
	
	cout<<"Sum of Even Elements from array is :"<<iRet;
	
	return 0;
}