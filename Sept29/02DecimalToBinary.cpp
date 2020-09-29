#include<iostream>
using namespace std;

int main()
{
    int n, i, j, bi=0,dn;

    cout<<"\n Enter The Decimal Number : ";
    cin>>n;

    dn=n;
    i=1;

    for(j=n;j>0;j=j/2)
    {
        bi=bi+(n%2)*i;
        i=i*10;
        n=n/2;
    }
    cout<<"\n The Binary Number : "<<bi;
    cout<<"\n\n";
    return 0;
}
