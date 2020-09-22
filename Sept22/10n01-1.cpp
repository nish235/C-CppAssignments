#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"\n Enter m : ";
    cin>>m;
    if(m!=0)
    {
        if(m>0)
        {
            n=1;
        }
        else
        {
            n=-1;
        }
    }
    else
    {
        n=0;
    }
    cout<<"\n The value of m = "<<m;
    cout<<"\n The value of n = "<<n;
    cout<<"\n\n";
    return 0;
}
