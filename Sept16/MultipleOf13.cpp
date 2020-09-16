#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter The Number : ";
    cin>>n;
    if(n % 13 == 0 || n % 13 == 1)
    {
        cout<<"\n TRUE ";
    }
    else
    {
        cout<<"\n FALSE ";
    }
    cout<<"\n\n";
    return 0;
}
