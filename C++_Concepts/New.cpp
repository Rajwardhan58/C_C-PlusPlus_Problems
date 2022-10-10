#include<iostream>
using namespace std;

int main()
{
    int *p=NULL;

    //p=(int *)malloc(Sizeof(int)*5);
    p=new int[5];

    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>*(p+i);
    }
    cout<<"Elements are : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<"\t";
    }

    delete []p;
    return 0;
}