#include<iostream>
using namespace std;

int main()
{
    int  i,sum=0;
    cout<<"\n 10 Natural Numbers : ";
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        cout<<"\n "<<i;
    }
    cout<<"\n\n Sum Of 10 Natural Numbers Is : "<<sum;
    cout<<"\n\n";
    return 0;
}
