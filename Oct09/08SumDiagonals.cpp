#include<iostream>
using namespace std;

int main()
{
    int i,j,a[50][50],sum=0,n;
    cout<<"\n Enter the size of the square matrix : ";
    cin>>n;
	cout<<"\n Enter Elements in the First Matrix :\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
            cin>>a[i][j];
            if(i==j)
                sum= sum+a[i][j];
        }
    }
    cout<<"\n The matrix is : \n\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n ;j++)
        cout<<"\t"<<a[i][j];
	    cout<<"\n";
    }
    cout<<"\n Addition of the right Diagonal elements is : "<<sum;
    cout<<"\n\n";
    return 0;
}
