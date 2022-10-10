//Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters

#include<iostream>
using namespace std;

int Difference(char *ptr)
{
    int Count1=0,Count2=0;
    while(*ptr!='\0')
    {
        if(*ptr>='A' && *ptr<='Z')
        {
            Count1++;
        }
        else if(*ptr>='a' && *ptr<='z')
        {
            Count2++;
        }
        ptr++;
    }
    return Count2-Count1;
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    int Diff=Difference(arr);
    cout<<"difference between frequency of small frequency of capital characters is "<<Diff<<endl;
    return 0;
}