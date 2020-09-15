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
    if((a >= 20 && a <= 50) || (b >= 20 && b <= 50) || (c >= 20 && c <= 50))
    {
        cout<<"\n TRUE ";
    }
    else
    {
        cout<<"\n FALSE ";
    }
    return 0;
}
