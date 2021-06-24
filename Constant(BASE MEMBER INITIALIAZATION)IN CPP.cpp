#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		int j;
		const int k;
		
		//BASE MEMBER INITIALIZATION
		
		Demo(int no1,int no2,int no3) : i(no1),j(no2),k(no3)
		{
			cout<<"constructor\n";
		}
};
int main()
{
	Demo obj1(10,20,30);
	Demo obj2(40,50,60);
	
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
	return 0;
}
