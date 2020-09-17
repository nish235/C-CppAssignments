#include<iostream>
using namespace std;

int main()
{
    int i,a[2];
    cout<<"\n Enter Array : \n";
    for(i=0;i<=1;i++)
    {
        cin>>a[i];
    }
    if(a[0]!=15 || a[0]!=20 ||a[1]!=15 || a[1]!=20)
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
