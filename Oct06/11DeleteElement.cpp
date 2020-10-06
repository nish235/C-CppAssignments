#include<iostream>
using namespace std;

int main()
{
    int a1[10],i,pos,n;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }
    cout<<"\n Enter the position where to delete : ";
    cin>>pos;
    i=0;
    while(i!=pos-1)
        i++;

    while(i<n)
    {
        a1[i]=a1[i+1];
        i++;
    }
    n--;
    cout<<"\n The new list is : ";
    for(i=0;i<n;i++)
    {
        cout<<" "<<a1[i];
    }
    cout<<"\n\n";
    return 0;
}
