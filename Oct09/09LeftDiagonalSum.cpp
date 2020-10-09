#include<iostream>
using namespace std;

int main()
{
    int i,j,a[10][10],sum=0,n,m=0;
    cout<<"\n Enter the size of the square matrix : ";
    cin>>n;
    m=n;
    cout<<"\n Enter Elements in the First Matrix : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
            cin>>a[i][j];
        }
    }
    cout<<"\n The matrix is : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n ;j++)
            cout<<"\t"<<a[i][j];
	    cout<<"\n";
    }
    for(i=0;i<n;i++)
	{
        m=m-1;
        for(j=0;j<n ;j++)
        {
            if(j==m)
            {
                sum=sum+a[i][j];
            }
        }
    }
    cout<<"\n Addition of the  left Diagonal elements is : "<<sum;
    cout<<"\n\n";
    return 0;
}
