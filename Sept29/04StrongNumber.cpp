#include<iostream>
using namespace std;

int main()
{
    int i, n, n1, s1=0,j;
    long fact;

    cout<<"\n Enter The Number : ";
    cin>>n;

    n1=n;

    for(j=n;j>0;j=j/10)
    {
        fact=1;
        for(i=1;i<=j%10;i++)
        {
            fact=fact*i;
        }
        s1=s1+fact;
    }
    if(s1==n1)
    {
        cout<<"\n Strong Number ";
    }
    else
    {
        cout<<"\n Not Strong Number ";
    }
    cout<<"\n\n";
    return 0;
}
