//Accept the number from user and print below pattern
// input : 5
//output : #    1   *   #    2   *  #    3   *  #    4   *  #    5   *
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue=0;
    printf("enter the value\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}