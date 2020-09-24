#include<iostream>
using namespace std;

int main()
{
    int c,s,d;
    cout<<"\n Enter The COST PRICE : ";
    cin>>c;
    cout<<"\n Enter The SELLING PRICE : ";
    cin>>s;
    d=s-c;
    if(d>0)
    {
        cout<<"\n You Are In PROFIT "<<endl;
        cout<<"\n PROFIT = "<<d;
    }
    else if(d<0)
    {
        cout<<"\n You Are In LOSS "<<endl;
        cout<<"\n LOSS = "<<d;
    }
    else
    {
        cout<<"\n You Are In No Profit and No Loss ";
    }
    cout<<"\n\n";
    return 0;
}
