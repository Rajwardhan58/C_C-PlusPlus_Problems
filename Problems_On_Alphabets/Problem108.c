//Accept the character from user.
//if it is capital then display all the characters from the input characters till z.
//if input character is small then print all the characters in reverse order till a.
//in other cases return directly

#include<stdio.h>

void Display(char ch)
{
    if(ch>='a' && ch<='z')
    {
        for(int i=ch;i>='a';i--)
        {
            printf("%c\t",i);
        }
    }
    else if(ch>='A' && ch<='Z')
    {
        for(int i=ch;i<='Z';i++)
        {
            printf("%c\t",i);
        }
    }
}

int main()
{
    char ch='\0';
    printf("Enter the character\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}

