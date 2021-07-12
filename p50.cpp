//To find Smallest Value

#include<iostream>
using namespace std;
int SmallestNumber(int arr[],int iSize)
{
	int i = 0,iMin = 0;
	iMin = arr[0];
	for(i = 0;i<iSize;i++)
	{
		if(arr[i] < iMin)
		{
			iMin = arr[i];
		}
	}
	return iMin;
}
int main()
{
	int iValue = 0,i = 0;
	int iRet = 0;
	
	cout<<"Enter the Number Elements\n";
	cin>>iValue;
	
	int *arr = new int(iValue);
	
	cout<<"Enter the Elements\n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	iRet = SmallestNumber(arr,iValue);
	
	cout<<"Smallest Number is:"<<iRet;
	
	delete arr;
	
	return 0;
}