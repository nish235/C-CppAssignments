#include<iostream>
#include<conio.h>
using namespace std;
void great(int n1,int n2)
{
    if(n1>n2)
    {
        cout<<"\n Greater Number Is : "<<n1;
    }
    else
    {
        cout<<"\n Greater Number Is : "<<n2;
    }
    cout<<"\n\n";
}
int main()
{
    int a,b;
    cout<<"\n Enter 1st Numbers : ";
    cin>>a;
    cout<<"\n Enter 2nd Numbers : ";
    cin>>b;
    great(a,b);
    return 0;
}
