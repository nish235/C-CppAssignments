#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    c=a+b;
    if(c>=10 && c<=20)
    {
        cout<<"\n 30";
    }
    else
    {
        cout<<"\n "<<c;
    }
    cout<<"\n\n";
    return 0;
}
