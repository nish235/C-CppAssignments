#include<iostream>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    cout<<"\n Enter 3rd Number : ";
    cin>>c;
    x=abs(a-b);
    y=abs(a-c);
    z=abs(b-c);
    if(x>=20 || y>=20 || z>=20)
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
