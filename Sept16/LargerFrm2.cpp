#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    if(a==b)
    {
        return 0;
    }
    else if((a%5==b%5 && a<b) || a>b)
    {
        cout<<"\n "<<a;
    }
    else
    {
        cout<<"\n "<<b;
    }
    cout<<"\n\n";
    return 0;
}
