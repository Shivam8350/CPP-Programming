#include<iostream>
using namespace std;
class Arithmatic
{
public:                             // Access specifier
    int iNo1,iNo2;              // Charcteristics
    Arithmatic(int x, int y)   // Constructor
    {
        iNo1 = x;
        iNo2 = y;
    }
    int Addition()              // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }
    int Substraction()      // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }
};
int main()
{
	int iRet1 = 0,iRet2 = 0;
	int i = 0,j = 0;
	cout<<"Enter First Number"<<"\n";
	cin>>i;
	cout<<"Enter Seconf Number"<<"\n";
	cin>>j;
	
	Arithmatic obj1(i,j);
	Arithmatic obj2(i,j);
    
    iRet1 = obj1.Addition();
    cout<<"Additon is :"<<iRet1<<"\n";
    
    iRet2 = obj2.Substraction();
    cout<<"Substraction is : "<<iRet2<<"\n";
    
    return 0;
	
	
}