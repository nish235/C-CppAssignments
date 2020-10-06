#include<iostream>
using namespace std;

int main()
{
    int a1[10],a2[10],a3[10];
    int n,mm=1,ctr=0;
    int i,j;

    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }

    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
		a3[i]=0;
    }

	for(i=0;i<n;i++)
    {
		for(j=0;j<n;j++)
        {
            if(a1[i]==a2[j])
            {
				a3[j]=mm;
				mm++;
            }
        }
        mm=1;
    }

    for(i=0;i<n;i++)
    {
        if(a3[i]==2)
        {
            ctr++;
        }
    }
    cout<<"\n The total number of duplicate elements found in the array is : "<<ctr;
    cout<<"\n\n";
    return 0;
}
