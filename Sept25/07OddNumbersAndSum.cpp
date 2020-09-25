#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;

    cout<<"\n Enter number of terms : ";
    cin>>n;
    cout<<"\n The odd numbers are :";
    for(i=1;i<=n;i++)
    {
        cout<<"\n"<<2*i-1;
        sum+=2*i-1;
    }
    cout<<"\n The Sum of odd Natural Number upto "<<n<<" terms : "<<sum;
    cout<<endl;
    return 0;
}
