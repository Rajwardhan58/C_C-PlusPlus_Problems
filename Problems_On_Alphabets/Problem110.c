//Accept character from user and display itd ASCII value in decimal,octal and hexadecimal

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal     %d\n",ch);
    printf("Octal       %o\n",ch);
    printf("Hexa-Dec    %x\n",ch);
}


int main()
{
    char cValue='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}