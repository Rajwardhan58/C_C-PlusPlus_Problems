//write a program which accept string from user and toggle the case

#include<iostream>
using namespace std;

void toggle(char *ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='a' && *ptr<='z')
        {
            *ptr=*ptr-32;
        }
        else if(*ptr>='A' && *ptr<='Z')
        {
            *ptr=*ptr+32;
        }
        ptr++;
    }
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    toggle(arr);
    cout<<arr<<endl;
    return 0;
}