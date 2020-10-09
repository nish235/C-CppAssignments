#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a[10][10],b[10][10];
    int i,j,r1,c1,r2,c2,flag=1;
    cout<<"\n Enter Rows and Columns of the 1st matrix : \n";
    cin>>r1>>c1;

    cout<<"\n Enter Rows and Columns of the 2nd matrix : \n";
    cin>>r2>>c2;
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
            cin>>a[i][j];
        }
    }

    if(r1==r2 && c1==c2)
    {
        cout<<"\n The Matrices can be compared : \n";
    	for(i=0; i<r1; i++)
    	{
     		for(j=0; j<c2; j++)
     		{
                if(a[i][j]!= b[i][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    else
    {
        cout<<"\n The Matrices Cannot be compared : \n";
        exit(1);
    }
    if(flag==1)
        cout<<"\n Two matrices are equal \n\n";
    else
        cout<<"\n Two matrices are not equal \n\n";
    return 0;
}
