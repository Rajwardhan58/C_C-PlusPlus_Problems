//Write a program which accept number from user and return difference between summetion of even digits and summetion of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0;
    int iSum1=0;
    int iSum2=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iSum1=iSum1+iDigit;
        }
        else
        {
            iSum2=iSum2+iDigit;
        }
        iNo=iNo/10;
    }


    return iSum1-iSum2;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the value\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}