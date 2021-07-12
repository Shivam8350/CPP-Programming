//Accept N number from Use and Display that number

#include<iostream>
using namespace std;

void Display(int arr[],int iSize)
{
	int i = 0;
	cout<<"Elements from array are:\n";
	for(i = 0;i<iSize;i++)
	{
		cout<<arr[i]<<"\n";
	}
}
int main()
{
	int*arr = NULL;
	int iLength = 0,i = 0;
	
	cout<<"Enter the Number of Element\n";
	cin>>iLength;
	
	arr = new int(iLength);
	cout<<"Enter the element\n";
	for(i = 0;i<iLength;i++)
	{
		cin>>arr[i];
	}
	
	Display(arr,iLength);
	
	delete arr;
	
	return 0;
	
}