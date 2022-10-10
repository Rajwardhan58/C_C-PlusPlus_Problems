//class can be a friend of a class

#include<iostream>
using namespace std;

class Hello
{
    public :
        void fun();
        void gun();
};

class Test
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    
    public:
        Test()
        {
            i=10;
            j=20;
            k=30;
        }
    friend class Hello;
};

void Hello :: fun()
{
    Test tobj1;

    cout<<tobj1.i<<endl;
    cout<<tobj1.j<<endl;
    cout<<tobj1.k<<endl;
}

void Hello :: gun()
{
    Test tobj2;

    cout<<tobj2.i<<endl;
    cout<<tobj2.j<<endl;
    cout<<tobj2.k<<endl;
}

int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}