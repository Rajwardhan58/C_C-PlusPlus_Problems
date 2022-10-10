//Write a program which accept string from user and check whether it contains vowels in it or not

#include<iostream>
using namespace std;

bool ChkVowel(char *str)
{
    bool flag=false;
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            flag=true;
        }
        str++;
    }
    return flag;
}

int main()
{
    char arr[30];
    cout<<"Enter the string"<<endl;
    cin.get(arr,30);

    bool bRet=ChkVowel(arr);
    
    if(bRet==true)
    {
        cout<<"contains vowel"<<endl;
    }
    else
    {
        cout<<"not contains vowel"<<endl;
    }    
    return 0;
}