//First Occurance

#include<iostream>
using namespace std;

int FirstOccurance(int arr[],int iSize,int iNo)
{
	int i = 0;
	for(i = 0;i<iSize;i++)
	{
		if(arr[i] == iNo)
		{
			break;
		}
	}
		if(i == iSize)
		{
			return -1;
		}
		else
		{
			return i;
		}
}
int main()
{
	int iValue = 0,i = 0,iNo = 0;
	int iRet = 0;
	
	cout<<"Enter Number of Element\n";
	cin>>iValue;

	int *arr = new int(iValue);
	
	cout<<"Enter Element\n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter Element that you want to Search\n";
	cin>>iNo;
	
	iRet = FirstOccurance(arr,iValue,iNo);
	
	if(iRet == -1)
	{
		cout<<"There is no Such Number\n";
	}
	else
	{
		cout<<"FirstOccurance is at :"<<iRet;
	}
	
	delete arr;
	
	return 0;
}