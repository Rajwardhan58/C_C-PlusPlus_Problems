//write a program which accept one number and position from user and check whether bit at that position is on or off.
//If bit is on return true otherwise false

#include<iostream>
using namespace std;

unsigned int ChkBit(unsigned int iNo,int iPos)
{
    if(iPos<=0 || iPos>32)
    {
        cout<<"Invalid position"<<endl;
    }
    int iMask=0X00000001;
    unsigned int iResult=0;
    iMask=iMask<<iPos-1;
    iResult=iNo&iMask;

    if(iResult==iMask)
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
    unsigned int iNo=0;
    bool bRet=false;
    int iPos=0;
    cout<<"Enter the value"<<endl;
    cin>>iNo;
    cout<<"Enter the position"<<endl;
    cin>>iPos;

    bRet=ChkBit(iNo,iPos);
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