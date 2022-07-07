//Write a program which accept number from use and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
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
        if(iDigit==4)
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
    iRet=CountFour(iValue);

    printf("count of four's in number are : %d\n",iRet);

    return 0;

}