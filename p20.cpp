//4
//-4 -3 -2 -1 0 1 2 3 4

#include<iostream>
using namespace std;

void Frequency(int iNo)
{
	int i = 0;
	for(i=-iNo;i <= iNo; i++)
	{
		cout<<i<<"\t";
	}
	
}
int main()
{
	int iValue = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	Frequency(iValue);
	
	return 0;
}