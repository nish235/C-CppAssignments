#include<iostream>
using namespace std;

int main()
{
    int a[20],n;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter Array : \n";
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    if(a[0]==a[n])
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
