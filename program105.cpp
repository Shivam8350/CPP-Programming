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
	int iRet = 0;
	Arithematic obj;

	obj.Accept();
	iRet = obj.Addition();
	cout<<"Addition is :"<<iRet<<"\n";

	iRet = obj.Subtraction();
	cout<<"Subtraction is:"<<iRet<<"\n";

	return 0;
}