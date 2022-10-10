//Multiple inheritance

#include<iostream>
using namespace std;

class Hello
{
    public :
        void fun()
        {
            cout<<"Inside Hello fun"<<endl;
        }
};

class Demo
{
    public:
        void gun()
            {
                cout<<"Inside Demo gun"<<endl;
            }
};

class Test : public Hello,Demo
{
    public:
        void sun()
            {
                cout<<"Inside Test sun"<<endl;
                fun();
                gun();

            }
};

int main()
{
    Test *p=new Test();
    p->sun();
    return 0;
}