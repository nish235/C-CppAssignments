#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n The square natural up to "<<n<<" terms are : "<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"\n "<<i*i;
        sum+=i*i;
    }
    cout<<"\n\n The Sum of Square Natural Number up to "<<n<<" terms = "<<sum;
    cout<<"\n\n";
    return 0;
}
