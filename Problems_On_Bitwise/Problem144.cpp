//write a program which accept one number from user and toggle 7th and 10th bit of that number.
#include<iostream>
using namespace std;

typedef unsigned int UINT;

void ToggleBit(UINT iNo)
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

    ToggleBit(iNo);
    return 0;
}