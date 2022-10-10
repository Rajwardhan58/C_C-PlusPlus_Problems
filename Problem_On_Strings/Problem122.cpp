//write a program which accept string from user and accept one character.
//Return frequency of that character
#include<iostream>
using namespace std;

int CountChar(char *ptr,char ch)
{
    int iCnt=0;

    while(*ptr!='\0')
    {
        if(*ptr==ch)
        {
            iCnt++;
        }
        ptr++;
    }
    return iCnt; 
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

    iRet=CountChar(arr,ch);
    cout<<"count of the character is "<<iRet<<endl;
    
    return 0;
}