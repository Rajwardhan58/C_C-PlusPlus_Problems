// Accept number of rows and number of columns from user and display below pattern
//input : row=4 & column=3
/*
    A   A   A
    B   B   B
    C   C   C
    D   D   D
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    char ch='\0';
    for(iCnt1=1,ch='A';iCnt1<=iRow;iCnt1++,ch++)
    {
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter row value\n");
    scanf("%d",&iValue1);

    printf("Enter column value\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
