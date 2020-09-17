#include<iostream>
using namespace std;

int main()
{
    int a[20],b[20],n,i;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter 1st Array : \n";
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Enter 2nd Array : \n";
    for(i=0;i<=n;i++)
    {
        cin>>b[i];
    }
    if(a[0]==b[0] || a[n]==b[n])
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
