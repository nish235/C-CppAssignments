#include<iostream>
using namespace std;
int main()
{
    int n,i=51;
    cout<<"\n Enter The Number : ";
    cin>>n;
    if(n>i)
    {
        cout<<"\n Entered Value is >51 : "<<n-i;
        cout<<"\n RESULT IS : "<<(n-i)*3;
    }
    else
    {
        cout<<"\n Entered Value Is <51 : "<<i-n;
    }
    cout<<"\n\n";
    return 0;
}
