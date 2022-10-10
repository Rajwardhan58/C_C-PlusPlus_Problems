#include<iostream>
using namespace std;

class Test
{
    public:
        void Addition(int a,int b)
        {
            int ans=a+b;
            cout<<ans<<endl;
        }
        void Addition(int a,int b,int c)
        {
            int ans=a+b+c;
            cout<<ans<<endl;
        }
};

int main()
{
    Test *p=new Test();
    p->Addition(10,11);
    p->Addition(10,11,12);
    return 0;
}