#include<iostream>
using namespace std;

int main()
{
    int a1[10],n,ctr=0;
    int i,j,k;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }
    cout<<"\n The unique elements found in the array are : ";
    for(i=0;i<n;i++)
    {
        ctr=0;
        for(j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(a1[i]==a1[j])
                {
                    ctr++;
                }
            }
        }
        if(ctr==0)
        {
            cout<<a1[i]<<" ";
        }
    }
    cout<<"\n\n";
    return 0;
}
