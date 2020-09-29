#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int i, n, sum=0;
	cout<<"\n Enter The Number Of Elements to be Store : ";
    cin>>n;

    cout<<"\n Enter The Elements in Array : ";
    for(i=0;i<n;i++)
    {
	    cout<<"\n Element "<<i+1<<" : ";
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        sum += a[i];
    }

    cout<<"\n Sum of all elements stored in the array is : "<<sum;
    cout<<"\n\n";
    return 0;
}
