#include<iostream>
using namespace std;

int main()
{
    int num,i,ctr=0;
    cout<<"\n Enter The Number : ";
    cin>>num;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            ctr++;
            break;
        }
    }
    if(ctr==0 && num!=1)
    {
        cout<<"\n "<<num<<" is a PRIME number ";
    }
    else
    {
        cout<<"\n "<<num<<" is NOT A PRIME number ";
    }
    cout<<"\n\n";
    return 0;
}
