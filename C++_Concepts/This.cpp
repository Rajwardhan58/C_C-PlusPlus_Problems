#include<iostream>
using namespace std;

class Test
{
    public:
        int a;
        int b;
        Test(int a=10,int b=20)         //parameterized constructor with default valus
        {
            this->a=a;
            this->b=b;
        }
        void fun(int iNo)
        {
            cout<<"Inside fun function"<<endl;
            cout<<this->a<<endl;
            cout<<this->b<<endl;
            cout<<iNo<<endl;
        }
};

int main()
{
    Test *p=new Test(11,22);
    p->fun(33);
    return 0;
}