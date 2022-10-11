//write a program which accept two numbers from user and display position of common ON bits from that numbers.

#include<iostream>
using namespace std;

void CountOn(int iVal1,int iVal2)
{
    int iCnt=0;
    int iMask=0X00000001;
    unsigned int iResult1=0;
    unsigned int iResult2=0;
    for(int i=1;i<=32;i++)
    {
        iResult1=iVal1&iMask;
        iResult2=iVal2&iMask;
        if(iResult1==iMask && iResult2==iMask)
        {
            cout<<i<<"\t";
        }
        iMask=iMask<<1;
    }
    
}

int main()
{
    int iVal1=0,iVal2=0;
    int iRet=0;
    cout<<"Enter the first value"<<endl;
    cin>>iVal1;
    cout<<"Enter the second value"<<endl;
    cin>>iVal2;

    CountOn(iVal1,iVal2);
    
    return 0;
}