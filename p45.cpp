//Count Even Elements

#include<iostream>
using namespace std;

int CountEven(int arr[],int iSize)
{
	int i = 0,iCnt = 0;
	
	for(i = 0;i<iSize;i++)
	{
		if(arr[i] % 2 == 0)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	//int *arr = NULL;
	int iValue = 0,i = 0;
	int iRet = 0;
	
	cout<<"Enter Number of Elements\n";
	cin>>iValue;
	
	int *arr = new int(iValue);
	
	cout<<"Enter Elements \n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	iRet = CountEven(arr,iValue);
	
	cout<<"Even Elements is :"<<iRet;
	
	delete arr;
	
	return 0;
}