/* Accept Number from User and Display the Digits of that numbers separately in reverse order
Input : 7521
Output :  1
          2
          5
          7
*/
#include<iostream>
using namespace std;
void Reverse(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		cout<<iDigit<<"\t";
		iNo = iNo /10;
	}
}

int main()
{
	int iValue = 0;
	cout<<"Enter Number"<<"\n";
	cin>>iValue;
	
	Reverse(iValue);
	
	return 0;
}