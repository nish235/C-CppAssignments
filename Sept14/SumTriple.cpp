#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\n Enter First Number  : ";
    cin>>a;
    cout<<"\n Enter Second Number : ";
    cin>>b;
    if(a==b)
    {
        cout<<"\n TRIPLE OF "<<a+b<<" IS : " <<(a+b)*3;
    }
    else
    {
        cout<<"\n SUM IS : " <<a+b;
    }
    cout<<"\n\n";
    return 0;
}
