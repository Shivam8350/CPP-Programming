/* Accept Number from user and return the Smallest digit
Input  :  7521
Output :  1
Input  :  121
Output :  1
Input  :  75057
Output :  0
*/
#include<iostream>
using namespace std;

int SmallestNo(int iNo)
{
	int iDigit = 0,iMin = 9;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit < iMin)
        {
            iMin = iDigit;
            if(iMin == 0)
            {
                break;
            }
        }
		iNo = iNo / 10;
	}
	return iMin;	
}

int main()
{
	int iValue = 0;
	int Ret = 0;
	
	cout<<"Enter Number\n";
	cin>> iValue;
	
	Ret = SmallestNo(iValue);
	cout<<"Smallest Number is : "<<Ret;
	
	return 0;
}