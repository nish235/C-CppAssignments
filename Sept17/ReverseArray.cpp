#include<iostream>
using namespace std;

int main()
{
    int n,a[20],i;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter Array : \n";
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Reverse Of Array : \n";
    for(i=n-1;i>=0;i--)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"\n\n";
    return 0;
}
