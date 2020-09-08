#include<iostream>
#include<conio.h>
using namespace std;
void sod()
{
    int n,s=0,t;
    cout<<"\n Enter a Number : ";
    cin>>n;
    while(n>0)
    {
        t=n%10;
        s=s+t;
        n=n/10;
    }
    cout<<"\n Sum Of Digits Is : "<<s;
    cout<<"\n\n";
}
int main()
{
    sod();
    return 0;
}
