//Write a program which accept string from user and display it in reverse order

#include<iostream>
using namespace std;

void DisplayReverse(char *ptr)
{
    int i=0;
    while(*(ptr+i)!='\0')
    {
        i++;
    }

    for(int r=i-1;r>=0;r--)
    {
        cout<<*(ptr+r);
    }
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    DisplayReverse(arr);

    return 0;
}