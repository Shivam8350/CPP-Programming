#include<iostream>
using namespace std;

class arithmatic
{
	public:
		int i,j;
		
	int subtraction(int no1,int no2)
	{
		cout<<"inside int subtraction(int,int)"<<"\n";
		return no1 - no2;
	}
	int subtraction(int no1,int no2,int no3)
	{
		cout<<"inside subtraction"<<"\n";
		return  no1-no2-no3;
	}
	float subtraction(float no1,float no2)
	{
		cout<<"inside subtraction"<<"\n";
		return  no1 - no2;
	}
};

int main()
{
	arithmatic obj;
	int iret = 0;
	float fret = 0.0;
	
	iret = obj.subtraction(10,20);
    cout<<iret<<"\n";
	
	iret = obj.subtraction(10,20,30);
	cout<<iret<<"\n";
	
	fret = obj.subtraction(10,20);
	cout<<fret<<"\n";
	
	return 0;
	
}

