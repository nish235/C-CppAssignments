#include<iostream>
using namespace std;

int main()
{
    int a1[10],fr1[10];
    int n, i, j, ctr;

	cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
        fr1[i] = -1;
    }
    for(i=0;i<n;i++)
    {
        ctr=1;
        for(j=i+1; j<n; j++)
        {
            if(a1[i]==a1[j])
            {
                ctr++;
                fr1[j]=0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i]=ctr;
        }
    }
    cout<<"\n The frequency of all elements of array : \n";
    for(i=0;i<n;i++)
    {
        if(fr1[i]!=0)
        {
            cout<<" "<<a1[i]<<" occurs "<<fr1[i]<<" times \n";
        }
    }
    cout<<"\n\n";
    return 0;
}
