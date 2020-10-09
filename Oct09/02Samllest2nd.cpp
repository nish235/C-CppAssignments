#include<iostream>
using namespace std;

int main()
{
    int a1[10],n,i,j=0,sml,sml2;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter Elements in Array : ";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
	    cin>>a1[i];
    }

    sml=a1[0];
    for(i=0;i<n;i++)
    {
        if(sml>a1[i])
        {
            sml=a1[i];
            j=i;
        }
    }

    sml2=99999;
    for(i=0;i<n;i++)
    {
        if(i==j)
        {
            i++;
            i--;
        }
        else
        {
            if(sml2>a1[i])
            {
                sml2=a1[i];
            }
        }
    }
    cout<<"\n The Second smallest element in the array is : "<<sml2;
    cout<<"\n\n";
    return 0;
}
