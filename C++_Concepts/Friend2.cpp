//member function can be a friend of a class

#include<iostream>
using namespace std;

class Hello
{
    public :
        void fun();
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
    friend void Hello :: fun();
};

void Hello :: fun()
{
    Test tobj;

    cout<<tobj.i<<endl;
    cout<<tobj.j<<endl;
    cout<<tobj.k<<endl;
}

int main()
{
    Hello hobj;
    hobj.fun();
    return 0;
}