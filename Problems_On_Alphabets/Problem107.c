//Accept character from user.
//if character is small display its corresponding capital character, and if it capital then display its corresponding small.
//in other cases display as it is

#include<stdio.h>

void Display(char ch)
{
    if((ch>='a')&&(ch<='z'))
    {
        ch=ch-32;
        printf("%c",ch);
    }
    else if((ch>='A')&&(ch<='Z'))
    {
        ch=ch+32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}