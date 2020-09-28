#include<iostream>
using namespace std;

int main()
{
    int n,i;
    long sum=0;
    long int t=1;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<" "<<t;
        if(i<n)
        {
            cout<<" +";

        }
    sum=sum+t;
    t=(t*10)+1;
    }
    cout<<"\n\n The Sum is : "<<sum;
    cout<<"\n\n";
    return 0;
}
