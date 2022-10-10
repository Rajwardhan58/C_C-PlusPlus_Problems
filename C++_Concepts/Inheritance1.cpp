//Single level Inheritance

#include<iostream>
using namespace std;

class Base
{
    public:
        int a;
    private:
        int b;
    protected:
        int c;
    
    public:
        Base()
        {
            this->a=10;
            this->b=11;
            this->c=12;
        }
    
        void fun()
        {
            cout<<"Inside Base fun"<<endl;
        }
    private: 
        void gun()
        {
            cout<<"Inside Base gun"<<endl;
        }
    protected:
        void sun()
        {
            cout<<"Inside Base sun"<<endl;
        }
};

class Derived:public Base
{
    public:
        int i;

        Derived()
        {
            i=14;
        }

        void run()
        {
            cout<<"Inside Derived run"<<endl;
            fun();
            sun();
            //gun();            not allowed
            //cout<<b<<endl;    not allowed
            cout<<c<<endl;
            cout<<i<<endl;
        }
};

int main()
{
    Derived *p=new Derived();
    p->fun();
    //p->gun();     not allowed
    //p->sun();     not allowed
    p->run();

    cout<<"................................."<<endl;

    cout<<p->a<<endl;
    //cout<<p->b<<endl;     not allowed
    //cout<<p->c<<endl;     not allowed
    cout<<p->i<<endl;
    return 0;
}