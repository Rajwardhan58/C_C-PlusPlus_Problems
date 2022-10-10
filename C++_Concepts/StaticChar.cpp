//static charactristics

#include<iostream>
using namespace std;

class Test
{
    public:
        int i,j;
        static int x;

        Test()
        {
            i=11;
            j=12;
        }

        static void fun()
        {
            cout<<"Inside static method"<<endl;
            cout<<x<<endl;
            //cout<<i<<endl;    not applicable
        }
};

int Test::x=13;

int main()
{
    Test tobj;

    tobj.i;
    tobj.j;
    Test::x;
    Test::fun();
    return 0;
}