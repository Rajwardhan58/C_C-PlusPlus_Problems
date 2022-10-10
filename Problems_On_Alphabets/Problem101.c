//Accept a character from user and check whether it is alphabet or not (A-Z,a-z)

#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if(((ch>='a') && (ch<='z'))||((ch>='A')&&(ch<='Z')))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch='\0';
    bool bRet=false;
    printf("Enter the character\n");
    scanf("%c",&ch);
    
    bRet=CheckAlpha(ch);

    if(bRet==true)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not character");
    }

    return 0;
}