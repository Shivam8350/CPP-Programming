#include<iostream>
using namespace std;

void DisplayEven(int Arr[],int iSize)
{
	int i = 0;
	
	if((Arr == NULL) || (iSize < 0))
	{
		return;
	}
	cout<<"Element from array are:\n";
	for(i = 0;i<iSize;i++)
	{
		if(Arr[i] % 2 == 0)
		{
			cout<<Arr[i]<<"\n";
		}
	}
}
int main()
{
	int *arr = NULL;
	int iValue = 0,i = 0;
	
	cout<<"Enter the Number of Elements\n";
	cin>>iValue;
	
	arr = new int(iValue);
	
	cout<<"Enter the Elements\n";
	for(i = 0;i<iValue;i++)
	{
		cin>>arr[i];
	}
	
	DisplayEven(arr,iValue);
	
	delete arr;
	
	return 0;
	
}