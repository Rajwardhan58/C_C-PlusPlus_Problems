//write a program which accept string from user and count number of small case characters

#include<iostream>
using namespace std;

int CountSmall(char *ptr)
{
    int Count=0;
    while(*ptr!='\0')
    {
        if(*ptr>='a' && *ptr<='z')
        {
            Count++;
        }
        ptr++;
    }
    return Count;
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    int iCnt=CountSmall(arr);
    cout<<"Count of small case character is "<<iCnt<<endl;
    return 0;
}