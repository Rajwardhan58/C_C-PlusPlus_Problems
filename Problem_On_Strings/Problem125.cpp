//write a program which accept string from user and reverse thet string in place

#include<iostream>
using namespace std;

void Reverse(char *ptr)
{
    char *iStart=ptr,*iEnd=ptr;
    char temp='\0';

    while(*iEnd!='\0')
    {
        iEnd++;
    }
    iEnd--;
    while(iStart<iEnd)
    {
        temp=*iStart;
        *iStart=*iEnd;
        *iEnd=temp;
        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[30];
    cout<<"Enter the character"<<endl;
    cin.get(arr,30);

    Reverse(arr);
    cout<<arr<<endl;
    return 0;
}