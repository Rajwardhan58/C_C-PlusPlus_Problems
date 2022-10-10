//Accept character from user and check whether it is small case or not(a-z)

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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
    
    bRet=CheckSmall(ch);

    if(bRet==true)
    {
        printf("It is small character");
    }
    else
    {
        printf("It is not small character");
    }

    return 0;
}