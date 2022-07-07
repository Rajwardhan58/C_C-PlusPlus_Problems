//Accept one character from user and convert case of that character.

#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue>=97 && cValue<=122)
    {
        cValue=cValue-32;
        printf("%c\n",cValue);
    }
    else if(cValue>=65 && cValue<=90)
    {
        cValue=cValue+32;
        printf("%c\n",cValue);
    }
}


int main()
{
    char cValue='\0';

    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
}