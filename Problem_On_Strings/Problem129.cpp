//write a program which accept string from user and copy small case characters of that string into another string
#include<iostream>
using namespace std;

void StrCpySmall(char *aptr,char *bptr)
{
    while(*aptr!='\0')
    {
        if(*aptr>='a' && *aptr<='z')
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

    StrCpySmall(arr,brr);
    cout<<brr<<endl;
    return 0;
}