//Accept character from user and check wether that character is vowel or not

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef bool BOOL;

BOOL ChkVowel(char cVal)
{
    if((cVal=='a')||(cVal=='e')||(cVal=='i')||(cVal=='o')||(cVal=='u')||(cVal=='A')||(cVal=='E')||(cVal=='I')||(cVal=='O')||(cVal=='U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter character\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }
}