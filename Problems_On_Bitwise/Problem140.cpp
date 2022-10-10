//write a program which checks whether the first and last bit is on or off

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool ChkBit(UINT iValue)
{
    int iMask=0X80000001;
    int iResult=0;

    iResult=iMask&iValue;

    if(iMask==iResult)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue=0;
    cout<<"Enter the value"<<endl;
    cin>>iValue;

    bool bRet= ChkBit(iValue);

    if(bRet==true)
    {
        cout<<"Bit is on"<<endl;
    }
    else
    {
        cout<<"Bit is off"<<endl;
    }
    return 0;
}