#include<iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2,sum=0;
    cout<<"\n Enter the rows and columns of first matrix  : ";
    cin>>r1>>c1;
    cout<<"\n Enter the rows and columns of second matrix : ";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"\n Multiplication of Matrix is not possible ";
        cout<<"\n Column of first matrix and row of second matrix must be same ";
    }
    else
    {
        cout<<"\n Enter Elements in the First Matrix : \n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
                cin>>a[i][j];
            }
        }
        cout<<"\n Enter Elements in the Second Matrix : \n";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
                cin>>b[i][j];
            }
        }


        for(i=0;i<r1;i++)
            for(j=0;j<c2;j++)
                c[i][j]=0;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                    sum=sum+a[i][k]*b[k][j];
                        c[i][j]=sum;
            }
        }
        cout<<"\n The multiplication of two matrices is : \n";
        for(i=0;i<r1;i++)
        {
            cout<<"\n";
            for(j=0;j<c2;j++)
            {
                cout<<"\t"<<c[i][j];
            }
        }
    }
    cout<<"\n\n";
    return 0;
}
