#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter The Number : ";
    cin>>n;
    if(n%3 == 0 || n%7 == 0)
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
