//Write a program which accept number from use and count frequency of such a digit which are less than 6

#include<stdio.h>

int Count(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet=Count(iValue);

    printf("count are : %d\n",iRet);

    return 0;

}