#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;        //constant charactristics

        Demo(int a,int b):j(b)
        {
            i=a;
        }

        void fun()
        {
            cout<<"Inside fun"<<endl;
            i++;            //allowed
            //j++;  not allowed
        }


        //b is a constant input argument
        //gun is a constant function
        void gun(int a,const int b)const
        {
            int x=10;
            const int y=20;         //constant local variable

            cout<<"Inside gun"<<endl;
            cout<<i<<endl;
            //i++;      
            //j++;      NA

            x++;
            //y++;      NA

            a++;
            //b++;      NA
        }
};

int main()
{
    Demo obj1(11,21);

    const Demo obj2(11,21);

    obj1.fun();
    obj1.gun(10,20);

    //obj2.fun();       NA
    obj2.gun(10,20);        //constant object can call only constant function
    
    return 0;
}