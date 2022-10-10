#include<iostream>

using namespace std;

int main()
{
    //we can create multiple references to single variable
    
    int a=10;
    int &b=a;       //reference of a
    int &c=a;       //reference of a
    
    c++;
    cout<<a<<endl;
    cout<<"..............................."<<endl;

    //we can create reference to reference

    int p=13;
    int &q=p;
    int &r=q;

    r++;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;
    cout<<"..............................."<<endl;

    //we can create reference to pointer

    int x=11;
    int *ptr=&x;            //ptr pointer points to x
    int *(&ptr2)=ptr;       //ptr2 is reference of ptr 

    (*ptr2)++;              //x value increased

    cout<<*(ptr)<<endl;
    cout<<x<<endl;
    cout<<"..............................."<<endl;

    //we can create reference to array

    int Arr[5]={1,2,3,4,5};

    int (&Brr)[5]=Arr;

    cout<<Brr[3]<<endl;

    return 0;
}