#include<iostream>
using namespace std;

int main()
{
    int  i,sum=0,n;
    cout<<"\n Enter The Numbers : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        cout<<"\n "<<i;
    }
    cout<<"\n\n Sum Of "<<n<<" Natural Numbers Is : "<<sum;
    cout<<"\n\n";
    return 0;
}
