//Write a program which display ASCII table.
//Table contains symbol,Decimal,Hexadesimal and octal representation of every member from 0 to 255

#include<stdio.h>

void DisplayASCII()
{
    for(int i=0;i<=255;i++)
    {
        printf("dec\thex\toctal\tsymbol\n");
        printf("%d\t%x\t%o\t%c\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();

    return 0;
}