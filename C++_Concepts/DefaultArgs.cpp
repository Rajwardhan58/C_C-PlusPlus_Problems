#include<iostream>
using namespace std;

float Area(float fradious,float PI=3.14)
{
    float fRet=PI*fradious*fradious;
    return fRet;
}
int main()
{
    float fNo=11.3;
    float fRet=Area(fNo);
    cout<<fRet<<endl;
    fRet=Area(fNo,3.11);
    cout<<fRet<<endl;
    return 0;
}
