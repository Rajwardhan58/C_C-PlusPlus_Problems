//write a program which accept string from user and display only digit from it

#include<iostream>
using namespace std;

void Digits(char *ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='0' && *ptr<='9')
        {
            cout<<*ptr<<"\t";
        }
        ptr++;
    }
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    Digits(arr);
    return 0;
}