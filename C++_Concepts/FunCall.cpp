#include<iostream>
using namespace std;

class Test
{
    public:

        void fun(int a,int b)
        {
            cout<<"call by value"<<endl;
            cout<<a<<endl;
            cout<<b<<endl;
        }
        void gun(int *ptr)
        {
            cout<<"call by address"<<endl;
            cout<<*(ptr)<<endl;
        }
        void sun(int &ref)
        {
            cout<<"call by reference"<<endl;
            cout<<ref<<endl;
        }

};

int main()
{
    int iValue1,iValue2;
    cout<<"Enter the first value"<<endl;
    cin>>iValue1;
    cout<<"Enter the first value"<<endl;
    cin>>iValue2;

    Test *p=new Test();
    p->fun(iValue1,iValue2);    
    p->gun(&iValue1);
    p->sun(iValue2);
    return 0;
}