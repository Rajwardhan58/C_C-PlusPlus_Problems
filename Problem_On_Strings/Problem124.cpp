//write a program which accept string from user and accept one character.
//Return index of last occurence of that character
#include<iostream>
using namespace std;

int LastChar(char *ptr,char ch)
{
    int flag=0;
    int iNo=0;

    while(*ptr!='\0')
    {
        if(*ptr==ch)
        {
            iNo=flag;
        }
        flag++;
        ptr++;
    }
    if(iNo>=flag)
    {
        return -1;
    } 
    else
    {
        return iNo;
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

    iRet=LastChar(arr,ch);
    cout<<"index of the last occ character is "<<iRet<<endl;
    
    return 0;
}