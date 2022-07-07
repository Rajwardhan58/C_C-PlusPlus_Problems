//Write a program to accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFactors(int iNo)
{
    int iCnt=0;
    int iMult=1;
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)         //time complexity n/2
    {
        if(iNo%iCnt==0)
        {
            iMult=iMult*iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the value \n");
    scanf("%d",&iValue);
    iRet=MultFactors(iValue);

    printf("%d\n",iRet);

    return 0;
}

