//write a program which checks whether 15th bit is on or off

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iValue)
{
    int iMask=0x00004000;
    int iResult=0;

    iResult=iValue&iMask;

    if(iResult==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    bool bRet=false;
    UINT iValue=0;
    cout<<"Enter the value"<<endl;
    cin>>iValue;

    bRet=chkBit(iValue);
    if(bRet==true)
    {
        cout<<"bit is on"<<endl;
    }
    else
    {
        cout<<"Bit is off"<<endl;
    }
    return 0;
}