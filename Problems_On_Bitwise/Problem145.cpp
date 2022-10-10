//write a program which accept one number from user and on its first four bits.
//return modified number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    int iMask=0X0000000f;
    UINT iResult=0;

    iResult=iNo|iMask;

    return iResult;
}

int main()
{
    UINT iRet=0;
    UINT iValue=0;
    cout<<"Enter the value"<<endl;
    cin>>iValue;

    iRet=OnBit(iValue);

    cout<<iRet<<endl;
    return 0;
}