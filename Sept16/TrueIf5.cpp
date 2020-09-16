#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    c=a+b;
    d=abs(a-b);
    if(a==5 || b==5 || c==5 || d==5)
    {
        cout<<"\n TRUE ";
    }
    else
    {
        cout<<"\n FALSE ";
    }
    cout<<"\n\n";
    return 0;
}
