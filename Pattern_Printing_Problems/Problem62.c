// Accept number of rows and number of columns from user and display below pattern
//input : row=4 & column=4
// A       B       C       D
// a       b       c       d
// A       B       C       D
// a       b       c       d
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    char ch1='\0';
    char ch2='\0';

    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        for(iCnt2=1,ch1='a',ch2='A';iCnt2<=iCol;iCnt2++)
        {
            if(iCnt1%2==0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {
                printf("%c\t",ch2);
                ch2++;
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