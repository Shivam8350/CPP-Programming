#include<iostream>

using namespace std;

class Demo
{
public:
    int i;
    int j;
    const int k;
    
    // Base member initialisation
    Demo(int no) : j(++no),k(++no),i(++no)
    {
        cout<<"Constructor\n";
    }
};

int main()
{
    Demo obj1(10);

    cout<<obj1.i<<"\n";     // ??
    cout<<obj1.j<<"\n";     // ??
    cout<<obj1.k<<"\n";     // ??
        
    return 0;
}
