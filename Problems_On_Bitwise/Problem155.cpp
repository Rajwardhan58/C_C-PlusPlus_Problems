//write a program which accept one number from user and range of position from user.
//Toggle all bits from that range

#include<iostream>
using namespace std;
unsigned int ToggleBit(unsigned int iNo,unsigned int iPos1,unsigned int iPos2)
{
   unsigned int iResult=0;
    int iMask1=0xffffffff;
    int iMask2=0xffffffff;
    int iMask=0;
    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2>>(32-iPos2);

    iMask=iMask1&iMask2;

    return iMask^iNo;

    
}

int main()
{
    unsigned int iVal=0,iPos1=0,iPos2=0;
    unsigned int iRet=0;
    
    cout<<"Enter the value"<<endl;
    cin>>iVal;
    cout<<"Enter the first position"<<endl;
    cin>>iPos1;
    cout<<"Enter the last position"<<endl;
    cin>>iPos2;

    iRet=ToggleBit(iVal,iPos1,iPos2);
    cout<<iRet<<endl;
    
    return 0;
}