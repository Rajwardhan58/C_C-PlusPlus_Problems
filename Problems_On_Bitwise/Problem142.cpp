//write a program which accept one number from user and off 7thand 10th bit of that number if it is on.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void OffBit(UINT iNo)
{
    int iMask=0X00000240;
    int iResult=0;

    iResult=iMask^iNo;

    cout<<iResult<<endl;
}

int main()
{
    UINT iNo=0;
    cout<<"Enter the value"<<endl;
    cin>>iNo;

    OffBit(iNo);
    return 0;
}