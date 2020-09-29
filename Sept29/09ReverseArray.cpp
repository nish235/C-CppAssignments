#include<iostream>
using namespace std;

int main()
{
    int i,n,a[100];
    cout<<"\n Enter The Number Of Elements to be Store : ";
    cin>>n;

    cout<<"\n Enter The Elements in Array : ";
    for(i=0;i<n;i++)
    {
	    cout<<"\n Element "<<i+1<<" : ";
        cin>>a[i];
    }

    cout<<"\n\n Reverse Of Array is as : "<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n\n";
    return 0;
}
