#include<iostream>
using namespace std;
int main()
{
    float in,cm;
    const float n=2.54;
    cout<<"\n Enter Length in cm : ";
    cin>>cm;
    in=cm/n;
    cout<<"\n "<<cm<<" cm  ===>  "<<in<<" inches";
    cout<<"\n\n";
    return 0;
}
