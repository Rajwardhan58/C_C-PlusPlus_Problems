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
};

int main()
{
    Test tobj;
    tobj.fun();
    return 0;
}