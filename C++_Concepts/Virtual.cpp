#include<iostream>
using namespace std;

class Test
{
    public:
        int i,j;

        Test()
        {
            i=4;
            j=5;
        }
    
    virtual void fun()          //Defination of virtual
    {
        cout<<"Inside Test fun"<<endl;
    }
    virtual void gun()
    {
        cout<<"Inside Test gun"<<endl;
    }
};

class Demo:public Test
{
    public:
        int x,y;

        Demo()
        {
            x=8;
            y=7;
        }

        void fun()      
        {
            cout<<"Inside Demo fun"<<endl;
        }
        void sun()
        {
            cout<<"Inside Demo sun"<<endl;
        }
};

int main()
{
    Test *p=new Demo();     //upcasting
    p->fun();
    p->gun();
    //p->sun();         //not Allowed
    return 0;
}