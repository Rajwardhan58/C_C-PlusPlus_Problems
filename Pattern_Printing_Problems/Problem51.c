// Accept the number from user and display below pattern
//input : 4
//output : A B C D
#include<stdio.h>

void Display(int iValue)
{
    int iCnt=0;
    char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iValue;iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue;
    printf("enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}