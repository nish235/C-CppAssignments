#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,s=0,t;
    cout<<"\n Enter a Number (less than 500) : ";
    cin>>n;
    if(n>=0 && n<=500)
    {
        while(n>0)
        {
            t=n%10;
            s=s+t;
            n=n/10;
        }
        cout<<"\n Sum Of Digits Is : "<<s;
    }
    else
    {
        cout<<"\n Your Number Is Not In Range ";
    }
    cout<<"\n\n";
    return 0;
}
