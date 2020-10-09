#include<iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],i,j,r,c;
    cout<<"\n Enter The Number of Columns And Rows: ";
    cin>>r>>c;
    cout<<"\n Enter Elements in the First Matrix : \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
            cin>>a[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }

    cout<<"\n\n The transpose of a matrix is : ";
    for(i=0;i<c;i++)
    {
        cout<<"\n";
        for(j=0;j<r;j++)
        {
            cout<<"\t"<<b[i][j];
        }
    }
    cout<<"\n\n";
    return 0;
}
