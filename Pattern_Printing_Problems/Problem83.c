// Accept number of rows and number of columns from user and display below pattern
//input : row=4 & column=4
// *       *       *       *
// *               *       *
// *       *               *
// *       *       *       *

#include<stdio.h>

void Display(int iRow,int iCol)
{
    if(iRow!=iCol)
    {
        return;
    }
    int iCnt1=0,iCnt2=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
            if((iCnt1+iCnt2==iRow+1)|| (iCnt1==1) || (iCnt1==iRow) || (iCnt2==1) || (iCnt2==iCol))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
            
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