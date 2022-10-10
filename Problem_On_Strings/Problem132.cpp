//write a program which accept string from user and copy that character of that string into another string by removing its all white spaces

#include<iostream>
using namespace std;

void StrCpyX(char *aptr,char *bptr)
{
    while(*aptr!='\0')
    {
        if(*aptr!=' ')
        {
            *bptr=*aptr;
            bptr++;
        }
        aptr++;
    }
    *bptr='\0';
}

int main()
{
    char arr[30];
    char brr[30];
    cout<<"Enter the string"<<endl;
    cin.getline(arr,30);

    StrCpyX(arr,brr);

    cout<<brr<<endl;

    return 0;
}