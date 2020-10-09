#include<iostream>
using namespace std;

int main()
{
    int a1[10],n,i,j=0,lrg,lrg2;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter Elements in Array : ";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
	    cin>>a1[i];
    }

    lrg=0;
    for(i=0;i<n;i++)
    {
        if(lrg<a1[i])
        {
            lrg=a1[i];
            j=i;
        }
    }

    lrg2=0;
    for(i=0;i<n;i++)
    {
        if(i==j)
        {
            i++;
            i--;
        }
        else
        {
            if(lrg2<a1[i])
            {
                lrg2=a1[i];
            }
        }
    }
    cout<<"\n The Second largest element in the array is : "<<lrg2;
    cout<<"\n\n";
    return 0;
}
