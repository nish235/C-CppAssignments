#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    int mn,mx;

    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n The positive divisor  : ";
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            cout<<" "<<i;
        }
    }
    cout<<endl;
    cout<<"\n The sum of the divisor is : "<<sum<<endl;
    if(sum==n)
    {
        cout<<"\n The Number Is PERFECT ";
    }
    else
    {
        cout<<"\n The Number Is NOT PERFECT ";
    }
    cout<<"\n\n";
    return 0;
}
