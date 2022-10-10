#include<iostream>
using namespace std;

class Arithmatic
{
    public : 
    // charactristics
    int iNo1;
    int iNo2;

    //Behaviour

    Arithmatic()        //Default Constructor
    {
        cout<<"Inside default constructor\n";
        iNo1=0;
        iNo2=0;
    }
    Arithmatic(int iNo1,int iNo2)
    {
        cout<<"Inside parametrised constructor\n";
        this->iNo1=iNo1;
        this->iNo2=iNo2;
    }

    ~Arithmatic()
    {
        cout<<"Inside Destructor\n";
    }

    int Addition()
    {
        int iAns=iNo1+iNo2;
        return iAns;
    }
    int Substraction()
    {
        int iAns=iNo1-iNo2;
        return iAns;
    }
};

int main()
{
    int iRet=0;
    int iValue1=0,iValue2=0;
    cout<<"Enter the first value"<<endl;
    cin>>iValue1;

    cout<<"Enter the second value"<<endl;
    cin>>iValue2;
    
    Arithmatic aobj(iValue1,iValue2);
    iRet=aobj.Addition();
    cout<<"Addition is : "<<iRet<<endl;

    iRet=aobj.Substraction();
    cout<<"Substraction is : "<<iRet<<endl;
    return 0;
}