#include<iostream>
#include<conio.h>
using namespace std;
void great()
{
    int n1,n2;
    cout<<"\n Enter 1st Numbers : ";
    cin>>n1;
    cout<<"\n Enter 2nd Numbers : ";
    cin>>n2;
    if(n1>n2)
    {
        cout<<"\n Greater Number Is : "<<n1;
    }
    else
    {
        cout<<"\n Greater Number Is : "<<n2;

    cout<<"\n\n";
}
int main()
{
    great();
    return 0;
}
