#include<iostream>
using namespace std;

void table(int iNo)
{
	int iCnt = 0;
	for(iCnt =1;iCnt<=10;iCnt++)
	{
		cout<<iCnt*iNo<<"\n";
	}
}
int main()
{
	int iValue = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	cout<<"Your Table is :"<<"\n";
	table(iValue);
	
	return 0;
}