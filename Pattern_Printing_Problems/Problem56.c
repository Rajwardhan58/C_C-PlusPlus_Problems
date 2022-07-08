// Accept number of rows and number of columns from user and display below pattern
//input : row=4 & column=3
/*
    *   *   *
    *   *   *
    *   *   *
    *   *   *
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter the row and column value\n");
    scanf("%d %d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

    return 0;
}