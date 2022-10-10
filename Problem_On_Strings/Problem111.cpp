//write a program which accept string from user and count number of Capital characters

#include<iostream>
using namespace std;

int CountCapital(char *ptr)
{
    int Count=0;
    while(*ptr!='\0')
    {
        if(*ptr>='A' && *ptr<='Z')
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

    int iCnt=CountCapital(arr);
    cout<<"Count of capital character is "<<iCnt<<endl;
    return 0;
}