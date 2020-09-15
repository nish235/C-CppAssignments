#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"\n Enter 1st Number : ";
    cin>>x;
    cout<<"\n Enter 2nd Number : ";
    cin>>y;
    if(abs(x % 10) == abs(y % 10))
    {
        cout<<"\n Last Digits are SAME ";
    }
    else
    {
        cout<<"\n Last Digits Are NOT SAME ";
    }
    cout<<"\n\n";
    return 0;
}

