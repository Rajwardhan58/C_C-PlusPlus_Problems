//write a program which accept string from user and concat second string after first string;
#include<iostream>
using namespace std;

void StrCatX(char *aptr,char *bptr)
{
    while(*aptr!='\0')
    {
           aptr++;
    }
    *aptr=' ';

    while(*bptr!='\0')
    {
        *aptr=*bptr;
        aptr++;
        bptr++;
    }
    *aptr='\0';
}

int main()
{
    char arr[30];
    char brr[30];
    
    cout<<"Enter the first string"<<endl;
    cin.getline(arr,30);
    cout<<"Enter the second string"<<endl;
    cin.getline(brr,30);


    StrCatX(arr,brr);
    cout<<arr<<endl;
    return 0;
}