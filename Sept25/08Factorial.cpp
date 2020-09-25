#include<iostream>
using namespace std;

int main()
{
    int i,f=1,num;

    cout<<"\n Enter The Number : ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    cout<<"\n The Factorial of "<<num<<" is : "<<f;
    cout<<"\n\n";
    return 0;
}
