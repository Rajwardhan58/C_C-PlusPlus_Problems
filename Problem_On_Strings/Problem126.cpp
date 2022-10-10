//write a program which accept string from user and copy the content of that string into another string

#include<iostream>
using namespace std;

void StrCpyX(char *aptr,char *bptr)
{
    while(*aptr!='\0')
    {
        *bptr=*aptr;
        aptr++;
        bptr++;
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