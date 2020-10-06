#include<iostream>
using namespace std;

int main()
{
    int a1[10],a2[10],a3[20];
    int s1,s2,s3;
    int i,j,k;
    cout<<"\n Enter The Number : ";
    cin>>s1;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<s1;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }

    cout<<"\n Enter The Number : ";
    cin>>s2;
    cout<<"\n Enter The Elements In Array : \n";
    for(i=0;i<s2;i++)
    {
        cout<<"\n element - "<<i+1<<" : ";
        cin>>a1[i];
    }

    s3=s1+s2;
    for(i=0;i<s1; i++)
    {
        a3[i]=a1[i];
    }
    for(j=0;j<s2;j++)
    {
        a3[i]=a2[j];
        i++;
    }

    for(i=0;i<s3;i++)
    {
        for(k=0;k<s3-1;k++)
        {
            if(a3[k]<=a3[k+1])
            {
                j=a3[k+1];
                a3[k+1]=a3[k];
                a3[k]=j;
            }
        }
    }
    cout<<"\n The merged array in descending order is :\n";
    for(i=0;i<s3;i++)
    {
        cout<<a3[i]<<"\t";
    }
	cout<<"\n\n";
	return 0;
}
