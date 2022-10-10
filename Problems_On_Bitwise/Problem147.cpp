//write a program which accept one number and position from user and off that bit .
#include<iostream>
using namespace std;


unsigned int OffBit(unsigned int iNo,int iPos)
{
    if(iPos<=0 || iPos>32)
    {
        cout<<"Invalid position"<<endl;
        return -1;
    }
    int iMask=0X00000001;
    unsigned int iResult=0;
    iMask=iMask<<iPos-1;
    iResult=iNo&iMask;

    if(iResult==iMask)
    {
        iResult=iMask^iNo;
    }

    return iResult;
}

int main()
{
    unsigned int iNo=0;
    unsigned int iRet=0;
    int iPos=0;
    cout<<"Enter the value"<<endl;
    cin>>iNo;
    cout<<"Enter the position"<<endl;
    cin>>iPos;

    iRet=OffBit(iNo,iPos);
    if(iRet==-1)
    {
        cout<<"Invalid Position"<<endl;
    }
    else if(iRet==0)
    {
        cout<<"Bit is already off"<<endl;
        cout<<"value after bit off "<<iNo<<endl;
    }
    else
    {
        cout<<"value after bit off "<<iRet<<endl;
    }
    return 0;
}