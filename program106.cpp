#include<iostream>

using namespace std;

class Arithematic
{
public:             //Access Specifier
	int iNo1,iNo2;  //Charcteristics

	void Accept()   //Beavior
	{
		cout<<"Enter First Number\n";
		cin>>iNo1;

		cout<<"Enter Second Number\n";
		cin>>iNo2;
	}

	int Addition()   //Behavior
	{
		int iResult=0;
		iResult = iNo1+iNo2;
		return iResult;
	}

	int Subtraction()  //Behaviour
	{
		int iResult=0;
		iResult = iNo1 - iNo2;
		return iResult;
	}
};
int main()
{
	int iRet1 = 0,iRet2 = 0;
	Arithematic obj1;
	Arithematic obj2;

	obj1.Accept();
	iRet1 = obj1.Addition();
	cout<<"Addition is :"<<iRet1<<"\n";

	obj2.Accept();
	iRet2 = obj2.Subtraction();
	cout<<"Subtraction is:"<<iRet2<<"\n";

	return 0;
}