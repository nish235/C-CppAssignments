#include<iostream>
using namespace std;

int main()
{
    int a1[50],a2[50];
    int i,n;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }

    for(i=0;i<n;i++)
    {
        a2[i] = a1[i];
    }

    cout<<"\n The elements stored in the array are : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a1[i];
    }

    cout<<"\n\n The elements copied into the array are : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a2[i];
    }
    cout<<"\n\n";
    return 0;
}
