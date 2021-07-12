//Count Number of Frequency

#include<iostream>
using namespace std;

int Frequency(int arr[],int iSize,int iNo)
{
	int i = 0,iCnt = 0;
	for(i = 0;i<iSize;i++)
	{
		if(arr[i] == iNo)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int iValue = 0,i = 0,iNo = 0;
	int iRet = 0;
	
	cout<<"Enter Numbers of Elements\n";
	cin>>iValue;
	
	int *arr = new int(iValue);
	
	cout<<"Enter Number\n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the Elements that you want to search\n";
	cin>>iNo;
	
	iRet = Frequency(arr,iValue,iNo);
	
	cout<<"Frequency of Numbers is :"<<iRet;
	
	delete arr;
	
	return 0;
	
}