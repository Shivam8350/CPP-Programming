#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int iSize)
{
	T iMax = Arr[0];
	for(int i = 0;i < iSize;i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
	return iMax;
}
int main()
{
	int *arr = NULL;
	int iSize,iRet;

	cout<<"Enter Number of Elements\n";
	cin>>iSize;

	arr = new int[iSize];

	cout<<"Enter the Values\n";
	for(int i = 0;i < iSize;i++)
	{
		cin>>arr[i];
	}

	iRet = Maximum(arr,iSize);
	cout<<"Largest number is :"<<iRet<<"\n";

	delete []arr;

	return 0;
}