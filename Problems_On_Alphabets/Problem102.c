//Accept character from user and check whether it is capital or not(A-Z)

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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
    
    bRet=CheckCapital(ch);

    if(bRet==true)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not capital character");
    }

    return 0;
}