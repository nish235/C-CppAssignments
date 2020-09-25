#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;

    cout<<"\n Enter The Number : ";
    cin>>n;
    cout<<"\n The Even Numbers Are : ";

    for(i=1;i<=n;i++)
    {
        cout<<"\n "<<2*i;
        sum+=2*i;
    }
    cout<<"\n The Sum of Even Natural Number up to "<<n<<" terms : "<<sum;
    cout<<"\n\n";
    return 0;
}
