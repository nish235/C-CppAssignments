#include<iostream>
#include<conio.h>
using namespace std;
void sod(int n)
{
    int s=0,t;
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
    int num;
    cout<<"\n Enter a Number : ";
    cin>>num;
    sod(num);
    return 0;
}
