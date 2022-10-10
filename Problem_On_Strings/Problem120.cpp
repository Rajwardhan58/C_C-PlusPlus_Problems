//write a program which accept string from user and count the number of white spaces

#include<iostream>
using namespace std;

int CountSpace(char *ptr)
{
    int iCnt=0;
    while(*ptr!='\0')
    {
        if(*ptr==' ')
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
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    int iCnt=CountSpace(arr);
    cout<<"count of white spaces are "<<iCnt<<endl;
    return 0;
}