#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"\n Enter PRINCIPLE AMOUNT        : ";
    cin>>p;
    cout<<"\n Enter RATE OF INTEREST        : ";
    cin>>r;
    cout<<"\n Enter TIME PERIOD (in months) : ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"\n SIMPLE INTEREST CALCULATED AS : "<<si;
    cout<<"\n\n";
    return 0;
}
