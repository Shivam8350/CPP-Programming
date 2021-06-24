#include<iostream>
using namespace std;
void Factor(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			cout<<iCnt<<"\t";
		}
	}
}
int main()
{
	int iValue = 0;
	cout<<"Enter Number"<<"\n";
	cin>>iValue;
	Factor(iValue);
	return 0;
}