//Accept character from user and check wether it is special symbol or not(!,@,#,$,%,^,&,*).

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if((ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')||(ch=='%')||(ch=='^')||(ch=='&')||(ch=='*'))
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
    printf("Enter the character\n");
    scanf("%c",&ch);

    bool bRet=ChkSpecial(ch);

    if(bRet==true)
    {
        printf("Character is special symbol\n");
    }
    else
    {
        printf("Character is not special symbol\n");
    }
    return 0;
}