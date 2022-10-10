#include<iostream>
using namespace std;

class Test
{
    public:
        int a;

        Test(int x)
        {
            a=x;
        }

        void fun()
        {
            cout<<"Inside fun"<<endl;
            cout<<a<<endl;
        }
};

int main()
{
    int i=22;
    
    // Test *p=NULL;
    // p=new Test(i);

    Test *p=new Test(i);
    p->fun();

    delete []p;
    return 0;
    
}