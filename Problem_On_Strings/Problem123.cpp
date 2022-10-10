//write a program which accept string from user and accept one character.
//Return index of first occurence of that character
#include<iostream>
using namespace std;

int FirstChar(char *ptr,char ch)
{
    int flag=0;

    while(*ptr!='\0')
    {
        if(*ptr==ch)
        {
            break;
        }
        flag++;
        ptr++;
    }
    if(*ptr=='\0')
    {
        return -1;
    } 
    else
    {
        return flag;
    }
}

int main()
{
    char arr[30];
    char ch;
    int iRet=0;
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);
    cout<<"Enter the character"<<endl;
    cin>>ch;

    iRet=FirstChar(arr,ch);
    cout<<"index of the first occ character is "<<iRet<<endl;
    
    return 0;
}