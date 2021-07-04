/* Accept Number from user and check whether number is Pallindrom or not
Input  :  7521
Output :  False
Input  :  121
Output :  True
Input  :  75057
Output :  True
*/

#include<iostream>
#include<stdbool.h>

using namespace std;

int CheckPallindrome(int iNo)
{
	int iDigit = 0,iTemp = 0; 
	int iRev = 0;
	
	iTemp = iNo;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	if(iRev == iTemp)
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
	bool bRet;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	bRet = CheckPallindrome(iValue);
	if(bRet == true)
	{
		cout<<"It is Pallindrom\n";
	}
	else
	{
		cout<<"It is not Pallindrom\n";
	}
	
	return 0;
	
}
