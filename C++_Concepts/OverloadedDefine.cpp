#include<iostream>
using namespace std;

class Test
{
    public:
        int i,j;
    
    void fun()          //Defination
    {
        cout<<"Inside fun"<<endl;
    }
    void fun(int no)    //overloaded defination
    {
        cout<<no<<endl;
    }
};

int main()
{
    Test tobj;
    tobj.fun();
    tobj.fun(11);
    return 0;
}