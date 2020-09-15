#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"\n Enter 1st Number : ";
    cin>>x;
    cout<<"\n Enter 2nd Number : ";
    cin>>y;
    if(x >= 20 && x <= 30 && y >= 20 && y <= 30)
    {
        if (x >= y)
        {
            cout<<"\n Larger Number is "<<x;
        }
        else
        {
            cout<<"\n Larger Number is "<<y;
        }
    }
    else if (x >= 20 && y <= 30)
    {
        cout<<"\n Larger Number is "<<x;
    }
    else if (y >= 20 && y <= 30)
    {
        cout<<"\n Larger Number is "<<y;
    }
    else
    {
        cout<<"\n Out Of Range 20-30 ";
    }
    cout<<"\n\n";
    return 0;
}
