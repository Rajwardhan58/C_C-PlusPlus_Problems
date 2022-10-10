//write a program which accept string from user and accept one character.
//check weather that character is present in string or not

#include<iostream>
using namespace std;

bool ChkChar(char *ptr,char ch)
{
    bool flag=false;

    while(*ptr!='\0')
    {
        if(*ptr==ch)
        {
            flag=true;
        }
        ptr++;
    }
    return flag; 
}

int main()
{
    char arr[30];
    char ch;
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);
    cout<<"Enter the character"<<endl;
    cin>>ch;

    bool bRet=ChkChar(arr,ch);
    if(bRet==true)
    {
        cout<<"character is present in string"<<endl;
    }
    else
    {
        cout<<"character is not present in string"<<endl;
    }
    return 0;
}