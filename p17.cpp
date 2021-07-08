#include<iostream>
using namespace std;

void Order(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		cout<<iCnt<<"\n";
	}
}

int main()
{
	int iValue = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	Order(iValue);
	
	return 0;
}