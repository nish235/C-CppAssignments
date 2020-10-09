#include<iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter Elements in the First Matrix : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
            cin>>a[i][j];
        }
    }

    cout<<"\n Enter Elements in the Second Matrix : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
            cin>>b[i][j];
        }
    }
    cout<<"\n The First matrix is : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
            cout<<"\t"<<a[i][j];
    }

    cout<<"\n The Second matrix is : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
            cout<<"\t"<<b[i][j];
    }

    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
    cout<<"\n The Addition of two matrix is : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
            cout<<"\t"<<c[i][j];
    }
    cout<<"\n\n";
    return 0;
}
