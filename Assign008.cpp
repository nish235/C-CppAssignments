#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"\n Enter 3 Numbers : ";
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3)
    {
        cout<<"\n Greater Number Is : "<<n1;
    }
    else if(n2>n3)
    {
        cout<<"\n Greater Number Is : "<<n2;
    }
    else
    {
        cout<<"\n Greater Number Is : "<<n3;
    }
    cout<<"\n\n\n\n";
    return 0;
}
