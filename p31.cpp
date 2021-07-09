#include<iostream>
using namespace std;

void Pattern(int iRow,int jColumn)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=jColumn;j++)
		{
			cout<<"*\t";
		}
		cout<<"\n";
	}
}
int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	cout<<"Enter Number of Rows\n";
	cin>>iValue1;
	cout<<"Enter Number of Columns\n";
	cin>>iValue2;
	
	Pattern(iValue1,iValue2);
	
	return 0;
}