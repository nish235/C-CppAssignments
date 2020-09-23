#include<iostream>
using namespace std;

int main()
{
    int t;

    cout<<"\n Enter Temperature : ";
    cin>>t;
    if(t<0)
    {
        cout<<"\n Freezing weather \n";
    }
    else if(t<10)
    {
        cout<<"\n Very cold weather \n";
    }

    else if(t<20)
    {
        cout<<"\n Cold weather \n";
    }
    else if(t<30)
    {
        cout<<"\n Normal Temperature \n";
    }
    else if(t<40)
    {
        cout<<"\n Its Hot \n";
    }
    else
    {
        cout<<"\n Its very hot \n";
    }
    cout<<"\n\n";
    return 0;

}
