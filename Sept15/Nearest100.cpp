#include<iostream>
using namespace std;
int main()
{
    int a,b,n=100;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    int val1=abs(a - n);
    int val2=abs(b - n);
    if(val1 == val2)
    {
        cout<<"\n Numbers Are Equal ";
    }
    else
    {
        if(val1 < val2)
        {
            cout<<"\n "<<a<<" is nearest to 100 ";
        }
        else
        {
            cout<<"\n "<<b<<" is nearest to 100 ";
        }
    }
    cout<<"\n\n";
    return 0;
}
