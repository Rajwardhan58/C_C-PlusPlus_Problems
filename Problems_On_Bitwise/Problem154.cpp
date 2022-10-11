//write a program which accept one number , two position from user and check whether bit at first or bit at second position is on or off.
#include<iostream>
using namespace std;

bool ChkOffOn(int iVal,int iPos1,int iPos2)
{
    int iCnt=1;
    int iMask=0X00000001;
    bool temp=false;
    unsigned int iResult=0;
    for(int i=1;i<=32;i++)
    {
        if(i==iPos1 || i==iPos2)
        {
            iResult=iVal&iMask;
            if(iResult==iMask)
            {
                temp=true;
            }
        }
        iMask=iMask<<1;
        //iCnt++;
    }

    return temp;
    
}

int main()
{
    int iVal=0,iPos1=0,iPos2=0;
    int iRet=0;
    bool bRet=false;
    cout<<"Enter the value"<<endl;
    cin>>iVal;
    cout<<"Enter the first position"<<endl;
    cin>>iPos1;
    cout<<"Enter the last position"<<endl;
    cin>>iPos2;

    bRet=ChkOffOn(iVal,iPos1,iPos2);
    

    if(bRet==true)
    {
        cout<<"bit is on"<<endl;
    }
    else
    {
        cout<<"bit is off"<<endl;
    }
    return 0;
}