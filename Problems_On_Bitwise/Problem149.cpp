//write a program which accept one number and position from user and toggle that bit .
#include<iostream>
using namespace std;


unsigned int ToggleBit(unsigned int iNo,int iPos)
{
    if(iPos<=0 || iPos>32)
    {
        cout<<"Invalid position"<<endl;
        return -1;
    }
    int iMask=0X00000001;
    unsigned int iResult=0;
    iMask=iMask<<iPos-1;
    iResult=iNo^iMask;

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

    iRet=ToggleBit(iNo,iPos);
    if(iRet==-1)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        cout<<"value after bit toggle "<<iRet<<endl;
    }
    return 0;
}