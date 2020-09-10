#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,t;
    cout<<"\n Enter The Number : ";
    cin>>n;
    while(n!=0)
    {
        t=n%10;
        rev=rev*10+t;
        n=n/10;
    }
    cout<<"\n Reverse Of Number : "<<rev;
    cout<<"\n\n";
    return 0;
}
