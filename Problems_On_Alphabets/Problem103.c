//Accept character from user and check whether it is digit or not(0-9)

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch>='0')&&(ch<='9'))
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
    printf("Enter the digit\n");
    scanf("%c",&ch);
    
    bRet=CheckDigit(ch);

    if(bRet==true)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not digit");
    }

    return 0;
}