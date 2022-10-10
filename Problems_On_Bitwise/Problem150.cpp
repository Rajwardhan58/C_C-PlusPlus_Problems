//write a program which accept one number from user and toggle contents of first and last nibble of that number .

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(int iVal)
{
    int iMask=0Xf000000f;
    UINT iResult=0;

    iResult=iVal^iMask;

    return iResult;
}

int main()
{
    int iVal=0;
    UINT iRet=0;

    cout<<"Enter the value"<<endl;
    cin>>iVal;

    iRet=ToggleBit(iVal);

    cout<<"value after toggle bit "<<iRet<<endl;
    return 0;
}