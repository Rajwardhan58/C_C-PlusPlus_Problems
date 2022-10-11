//write a program which accept one number from user and check whether 9th or 12th bit is on or off.
#include<iostream>
using namespace std;

bool ChkOffOn(int iVal)
{
    int iCnt=0;
    int iMask=0X00000900;
    unsigned int iResult=0;
    for(int i=1;i<=32;i++)
    {
        iResult=iVal&iMask;
        if(iResult!=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
}

int main()
{
    int iVal=0;
    int iRet=0;
    bool bRet=false;
    cout<<"Enter the value"<<endl;
    cin>>iVal;

    bRet=ChkOffOn(iVal);
    

    if(bRet==true)
    {
        cout<<"9th or 12th bit is on"<<endl;
    }
    else
    {
        cout<<"9th or 12th bit is off"<<endl;
    }
    return 0;
}