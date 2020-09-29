#include<iostream>
using namespace std;

int main()
{
    int i, n, n1, s1=0,j,k,en,sn;
    long fact;
    cout<<"\n Enter Starting Number : ";
    cin>>sn;
    cout<<"\n Enter Ending Number   : ";
    cin>>en;
    cout<<"\n\n The Strong numbers are : ";

    for(k=sn;k<=en;k++)
    {
        n1=k;
        s1=0;
        for(j=k;j>0;j=j/10)
        {
            fact = 1;
            for(i=1; i<=j % 10; i++)
            {
                fact = fact * i;
            }
            s1 = s1 + fact;
        }
        if(s1==n1)
        {
            cout<<"\t"<<n1;
        }

    }
    cout<<"\n\n";
    return 0;
}
