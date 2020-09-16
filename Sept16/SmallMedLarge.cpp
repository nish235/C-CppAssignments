#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"\n Enter 1st Number : ";
    cin>>x;
    cout<<"\n Enter 2nd Number : ";
    cin>>y;
    cout<<"\n Enter 3rd Number : ";
    cin>>z;
    if(y-x == z-y || z-x == y-z || x-y == z-x)
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
