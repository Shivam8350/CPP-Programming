//Input : 4  4
//Output : 
/*    
	1 2 3 4
	* * * *
	1 2 3 4
	* * * *
*/

#include<iostream>
using namespace std;

void Pattern(int iRow,int jColumn)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=jColumn;j++)
		{
			if((i % 2) == 0)
			{
				cout<<"*\t";
			}
			else
			{
				cout<<j<<"\t";
			}
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