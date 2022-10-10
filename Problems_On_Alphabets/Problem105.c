#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'a':
        case 'A':
            printf("your exam is at 7 AM");
            break;
        case 'b':
        case 'B':
            printf("your exam is at 8.30 AM");
            break;
        case 'c':
        case 'C':
            printf("your exam is at 9.20 AM");
            break;
        case 'd':
        case 'D':
            printf("your exam is at 10.30 AM");
            break;
        default:
            printf("Invalid division");
    }
}

int main()
{
    char cValue='\0';

    printf("Enter your division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}