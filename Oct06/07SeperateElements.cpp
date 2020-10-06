#include<iostream>
using namespace std;

int main()
 {
    int a1[10],a2[10],a3[10];
    int i,j=0,k=0,n;

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
        if(a1[i]%2==0)
        {
            a2[j]=a1[i];
            j++;
        }
        else
        {
            a3[k]=a1[i];
            k++;
        }
    }

    cout<<"\n The Even elements are : ";
    for(i=0;i<j;i++)
    {
        cout<<a2[i]<<"  ";
    }

    cout<<"\n The Odd elements are  : ";
    for(i=0;i<k;i++)
    {
        cout<<a3[i]<<"  ";
    }
    cout<<"\n\n";
    return 0;
 }
