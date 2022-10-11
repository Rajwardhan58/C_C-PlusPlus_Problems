//write a program which accept number from user and count number of ON bits in it without using % and / operator

#include<iostream>
using namespace std;

int CountOn(int iVal)
{
    int iCnt=0;
    int iMask=0X00000001;
    unsigned int iResult=0;
    for(int i=0;i<32;i++)
    {
        iResult=iVal&iMask;
        if(iResult==iMask)
        {
            iCnt++;
        }
        iMask=iMask<<1;
    }
    return iCnt;
}

int main()
{
    int iVal=0;
    int iRet=0;
    cout<<"Enter the value"<<endl;
    cin>>iVal;

    iRet=CountOn(iVal);
    cout<<"Count of on bits are "<<iRet<<endl;
    return 0;
}