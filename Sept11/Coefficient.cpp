#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n, a, bi;
    printf("Mx   ");
    for (n=0; n<=10;n++)
    cout<<"\t"<<n;
    n=0;
    do
    {
        a = 0, bi = 1;
        cout<< n;
        while(a<=n)
        {
            if(n==0 || a==0)
            cout<<"\t"<<bi;
            else
            {
                bi=bi* (n-a+1)/a;
                cout<<"\t"<<bi;
            }
            a=a+1;
        }
        cout<<"\n";
        n=n+1;
    }
    while(n<=10);
    cout<<"\n\n";
    return 0;
}
