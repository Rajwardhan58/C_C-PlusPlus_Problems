//write a program which accept one number from user and acccept another bit number and off bitNo of that number if it is on.
#include<iostream>
using namespace std;
typedef unsigned int UINT;

void OffBit(UINT iValue,int bitNo)
{
    int iMask=0X00000001;
    int iResult=0;
    iMask=iMask<<bitNo-1;
    iResult=iValue^iMask;
    cout<<iResult<<endl;
}

int main()
{
    UINT iValue=0;
    int bitNo;
    cout<<"Enter the value"<<endl;
    cin>>iValue;
    cout<<"Enter the bit number you want to off"<<endl;
    cin>>bitNo;

    OffBit(iValue,bitNo);

    return 0;
}