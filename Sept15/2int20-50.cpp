#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    if(a <= 20 || b >= 50)
    {
        cout<<"\n TRUE ";
    }
    else
    {
        cout<<"\n FALSE ";
    }
    return 0;
}
