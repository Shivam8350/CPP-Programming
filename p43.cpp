//Accept N number from user and Display Addition of N number

//Accept N number from Use and Display that number

#include<iostream>
using namespace std;

int SumElement(int arr[],int iSize)
{
	int i= 0,iSum = 0;
	
	for(i = 0;i<iSize;i++)
	{
		iSum = iSum + arr[i];
	}
	return iSum;
}
int main()
{
	int *arr = 0;
	int iValue = 0,i = 0;
	int iRet = 0;
	
	cout<<"Enter the number of Element\n";
	cin>>iValue;
	
	arr = new int(iValue);
	
	cout<<"Enter the Element\n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	iRet = SumElement(arr,iValue);
	
	cout<<"Sum of Element are :\n"<<iRet;
	
	delete arr;
	
	return 0;
	
}