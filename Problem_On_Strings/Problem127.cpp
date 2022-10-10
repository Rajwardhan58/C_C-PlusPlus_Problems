//write a program which accept string from user and copy the content of that string into another string up to n number

#include<iostream>
using namespace std;

void StrCpyNX(char *aptr,char *bptr,int iNo)
{
    while(*aptr!='\0' && iNo>0)
    {
        *bptr=*aptr;
        aptr++;
        bptr++;
        iNo--;
    }
    *bptr='\0';
}

int main()
{
    char arr[30];
    char brr[30];
    int iNo=0;
    cout<<"Enter the string"<<endl;
    cin.getline(arr,30);
    cout<<"Enter the range"<<endl;
    cin>>iNo;

    StrCpyNX(arr,brr,iNo);
    cout<<brr<<endl;
    return 0;
}