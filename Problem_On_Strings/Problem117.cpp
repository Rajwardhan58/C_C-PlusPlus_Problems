//write a program which accept string from user and convert it into upper case

#include<iostream>
using namespace std;

void strupperx(char *ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='a' && *ptr<='z')
        {
            *ptr=((*ptr)-32);
        }
        ptr++;
    }
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    strupperx(arr);
    cout<<arr<<endl;
    return 0;
}