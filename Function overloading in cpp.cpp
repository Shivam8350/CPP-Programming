#include<iostream>
using namespace std;

class arithmatic
{
	public:
		int i,j;
		
	int addition(int no1,int no2)
	{
		cout<<"Inside int Addition(int,int)"<<"\n";
		return no1+no2;
	} 
	int addition(int no1,int no2,int no3)
	{
		cout<<"Inside int Addition(int,int,int)"<<"\n";
		return no1+no2+no3;
	}
	float addition(float no1,float no2)
	{
		cout<<"Inside float Addition(float,float)"<<"\n";
		return no1 + no2;
	}
};

int main()
{
	arithmatic obj;
	int iret = 0;
	int fret = 0.0;
	
	iret = obj.addition(10,20);
	cout<<iret<<"\n";
	
	iret = obj.addition(10,20,30);
	cout<<iret<<"\n";
	
	fret = obj.addition(10,20);
	cout<<fret<<"\n";
	
	return 0;
}
