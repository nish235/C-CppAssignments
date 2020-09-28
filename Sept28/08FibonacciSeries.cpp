#include<iostream>
using namespace std;

int main()
{
    int prv=0,pre=1,trm,i,n;
    cout<<"\n Enter The Number : ";
    cin>>n;

    cout<<"\n Fibonacci Series : "<<endl;
    cout<<"\t"<<prv<<"\t"<<pre;

    for(i=3;i<=n;i++)
    {
        trm=prv+pre;
        cout<<"\t"<<trm;
        prv=pre;
        pre=trm;
    }
    cout<<"\n\n";
    return 0;
}
