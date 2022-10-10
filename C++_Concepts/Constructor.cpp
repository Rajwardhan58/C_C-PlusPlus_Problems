#include<iostream>
using namespace std;

class Test
{
    public:
        int iNo1,iNo2;

        Test()
        {
            iNo1=0;
            iNo2=0;
        }

        Test(int a,int b)
        {
            cout<<"Inside parameterised constructor"<<endl;
            iNo1=a;
            iNo2=b;
        }
        Test(Test &tref)
        {
            cout<<"Inside copy constructor"<<endl;
            iNo1=tref.iNo1;
            iNo2=tref.iNo2;
        }

};

int main()
{
    int iValue1=0;
    int iValue2=0;
    cout<<"Enter first value"<<endl;
    cin>>iValue1;
    cout<<"Enter second value"<<endl;
    cin>>iValue2;
    
    Test tobj2(iValue1,iValue2);
    Test tobj3(tobj2);

    return 0;
}