//write a program which accept string from user and copy that characters of that string into another string in reverse order
#include<iostream>
using namespace std;

void StrCpyRev(char *aptr,char *bptr)
{
    int iNo=0;
    while(*aptr!='\0')
    {
        iNo++;
        aptr++;
    }
    aptr--;
    while(iNo>0)
    {
        *bptr=*aptr;
        bptr++;
        aptr--;
        iNo--;
    }
    *bptr='\0';
}

int main()
{
    char arr[30];
    char brr[30];

    cout<<"Enter the string"<<endl;
    cin.getline(arr,30);
    
    StrCpyRev(arr,brr);
    cout<<brr<<endl;
    return 0;
}