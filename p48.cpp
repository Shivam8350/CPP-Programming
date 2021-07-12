//LastOccurance

#include<iostream>
using namespace std;

int LastOccurance(int arr[],int iSize,int iNo)
{
	int i = 0;
	for(i=iSize-1;i>=0;i--)
	{
		if(arr[i] == iNo)
        {
            break;
        }
	}
	return i;
}
int main()
{
	int iValue = 0,i = 0,iNo = 0;
	int iRet = 0;
	
	cout<<"Enter the Number of Element\n";
	cin>>iValue;
	
	int *arr = new int(iValue);
	
	cout<<"Enter the Element\n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the Element that you want to search LastOccurance\n";
	cin>>iNo;
	
	iRet = LastOccurance(arr,iValue,iNo);
	
	if(iRet == -1)
	{
		cout<<"There is no such Element\n";
	}
	else
	{
		cout<<"LastOccurance is at Position :"<<iRet;
	}
	
	delete arr;
	
	return 0;
}
