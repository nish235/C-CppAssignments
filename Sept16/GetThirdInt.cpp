#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    cout<<"\n Enter 3rd Number : ";
    cin>>c;
    if(a==b+c || b==a+c || c==a+b)
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
