#include<iostream>
using namespace std;

int main()
{
    int a1[100],i,n,p,inval;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }
    cout<<"\n Enter the value to be inserted : ";
    cin>>inval;
    cout<<"\n The exist array list is : \n ";
    for(i=0;i<n;i++)
        cout<<"\t"<<a1[i];
    for(i=0;i<n;i++)
        if(inval<a1[i])
        {
            p=i;
            break;
        }

    for(i=n;i>=p;i--)
        a1[i]=a1[i-1];
    a1[p]=inval;

    cout<<"\n\n After Insert the list is : \n ";
    for(i=0;i<=n;i++)
        cout<<"\t"<<a1[i];
    cout<<"\n";
    return 0;
}
