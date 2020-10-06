#include<iostream>
using namespace std;

int main()
{
    int a1[100];
    int n,i,j,tmp;

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
        for(j=i+1;j<n;j++)
        {
            if(a1[j]<a1[i])
            {
                tmp=a1[i];
                a1[i]=a1[j];
                a1[j]=tmp;
            }
        }
    }
    cout<<"\n Elements of array in sorted ascending order : \n";
    for(i=0;i<n;i++)
    {
        cout<<" "<<a1[i];
    }
	cout<<"\n\n";
	return 0;
}
