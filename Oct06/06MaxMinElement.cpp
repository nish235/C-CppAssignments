#include<iostream>
using namespace std;

int main()
{
    int a1[100];
    int i, mx, mn, n;

	cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }

    mx=a1[0];
    mn=a1[0];

    for(i=1;i<n;i++)
    {
        if(a1[i]>mx)
        {
            mx=a1[i];
        }
        if(a1[i]<mn)
        {
            mn=a1[i];
        }
    }
    cout<<"\n Maximum element is : "<<mx;
    cout<<"\n Minimum element is : "<<mn;
    cout<<"\n\n";
    return 0;
}
