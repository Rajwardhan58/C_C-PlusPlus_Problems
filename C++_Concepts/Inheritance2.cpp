//Multi level inheritance
#include<iostream>
using namespace std;
class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i=10;
            j=11;
            k=12;
        }
};

class Derived : protected Base
{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
    public:
        Derived()
        {
            this->x=13;
            this->y=14;
            this->z=15;
        }
};

class DerivedX : public Derived
{
    public:
        void fun()
        {
            cout<<i<<endl;
            //cout<<j<<endl;
            cout<<k<<endl;
            cout<<x<<endl;
            //cout<<y<<endl;
            cout<<z<<endl;
        }
};

int main()
{
    DerivedX *p=new DerivedX();
    p->fun();
    return 0;
}