#include<iostream>
using namespace std;

class Arithmatic
{
		public:
			int iNo1,iNo2;
			
		void Accept()
		{
			cout<<"Enter Number\n";
			cin>>iNo1;
			
			cout<<"Enter Second Number\n";
			cin>>iNo2;
		}
		
		int Addition()
		{
			int iResult = 0;
			iResult = iNo1 + iNo2;
			return iResult;
		}
		
		int Subtraction()
		{
			int iResult = 0;
			iResult = iNo1 - iNo2;
			return iResult;
		}
};
int main()
{
	int iRet = 0;
	Arithmatic obj1;
	Arithmatic obj2;
	
	obj1.Accept();
	iRet = obj1.Addition();
	cout<<"Addition is : "<<iRet<<"\n";
	
	obj2.Accept();
	iRet = obj2.Subtraction();
	cout<<"Subtraction is : "<<iRet<<"\n";
	
	return 0;
}