// Accept number of rows and number of columns from user and display below pattern
//input : row=4 & column=4
// 1       2       3       4
// 2       3       4       5
// 3       4       5       6
// 4       5       6       7
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    int iNo=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        iNo=iCnt1;
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
            printf("%d\t",iNo);
            iNo++;
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