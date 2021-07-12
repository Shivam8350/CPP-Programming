//Input : Row = 4 Column = 4
//Output : 
/*   
                   *
               *   *
            *  *   *
        *   *  *   *


	4,1  4,2  4,3  4,4
	3,1  3,2  3,3  3,4 
	2,1  2,2  2,3  2,4
	1,1  1,2  1,3  1,4
	
*/

#include<iostream>
using namespace std;

void Pattern(int iRow,int jColumn)
{
	int i = 0,j = 0;
	
	if(iRow != jColumn)
	{
		return;
	}
	
	for(i = 1;i<=iRow;i++)
	{
		for(j=1;j<=jColumn;j++)
		{
			if(i<=j) 
			{
				cout<<"*\t";
			}
			else
			{
				cout<<" \t";
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
	cout<<"Enter Number of Column\n";
	cin>>iValue2;
	
	Pattern(iValue1,iValue2);
	
	return 0;
}