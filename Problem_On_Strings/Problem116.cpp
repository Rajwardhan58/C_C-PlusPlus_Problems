//write a program which accept string from user and convert it into lower case

#include<iostream>
using namespace std;

void strlowerx(char *ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='A' && *ptr<='Z')
        {
            *ptr=((*ptr)+32);
        }
        ptr++;
    }
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    strlowerx(arr);
    cout<<arr<<endl;
    return 0;
}