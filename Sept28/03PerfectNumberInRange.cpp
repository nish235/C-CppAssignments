#include<iostream>
using namespace std;

int main()
{
    int n,i,sum;
    int mn,mx;
    cout<<"\n Enter The Starting Number : ";
    cin>>mn;
    cout<<"\n Enter The Ending Number : ";
    cin>>mx;
    cout<<"\n The Perfect numbers within the given range : ";
    for(n=mn;n<=mx;n++)
    {
        i=1;
        sum=0;
        while(i<n)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
            i++;
        }
        if(sum==n)
        {
            cout<<" "<<n;
        }
    }
    cout<<"\n\n";
    return 0;
}
