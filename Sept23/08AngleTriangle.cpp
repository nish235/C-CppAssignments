#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sum;
    cout<<"\n Enter a : ";
    cin>>a;
    cout<<"\n Enter b : ";
    cin>>b;
    cout<<"\n Enter c : ";
    cin>>c;
    sum =a+b+c;
    if(sum==180)
    {
        cout<<"\n The triangle is valid ";
    }
    else
    {
        cout<<"\n The triangle is not valid ";
    }
    cout<<"\n\n";
    return 0;
 }
