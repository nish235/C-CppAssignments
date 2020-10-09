#include<iostream>
using namespace std;

int main()
{
    int a1[3][3],i,j;
    cout<<"\n Enter The Matrix : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n element - "<<i+1<<","<<j+1<<" : ";
            cin>>a1[i][j];
        }
    }

    cout<<"\n The matrix is : \n";
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
            cout<<"\t"<<a1[i][j];
    }
    cout<<"\n\n";
    return 0;
}
