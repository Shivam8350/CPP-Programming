// Accept number from user and check whether it is perfect or not
// Input : 6
// Output : True        ( 6)   1 +  2 +  3

// Input :  12
// output : False       (16)  1+ 2 + 3 + 4 + 6

#include<iostream>
#include<stdbool.h>
using namespace std;

int Perfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
	int iValue = 0;
	int ret = 0;
	cout<<"Enter Number"<<"\n";
	cin>>iValue;
	
	ret = Perfect(iValue);
	if(ret == true)
	{
		cout<<"It is Perfect Number"<<"\n";
	}
	else
	{
		cout<<"It Is not Perfect Number"<<"\n";
	}
	return 0;
}