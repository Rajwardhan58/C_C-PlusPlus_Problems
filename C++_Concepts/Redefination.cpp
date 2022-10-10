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
    
    void fun()          //Defination
    {
        cout<<"Inside Test fun"<<endl;
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

        void fun()      //redefination
        {
            cout<<"Inside Demo fun"<<endl;
        }
};

int main()
{
    Demo obj;
    obj.fun();
    return 0;
}