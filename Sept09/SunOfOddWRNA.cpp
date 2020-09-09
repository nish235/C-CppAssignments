#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int sumodd()
{
    int num[5],i,tot=0;
    cout<<"\n Enter First Number  : ";
    cin>>num[0];
    cout<<"\n Enter Second Number : ";
    cin>>num[1];
    cout<<"\n Enter Third Number  : ";
    cin>>num[2];
    cout<<"\n Enter Fourth Number : ";
    cin>>num[3];
    cout<<"\n Enter Fifth Number  : ";
    cin>>num[4];
    for(i=0;i<=5;i++)
    {
        if((num[i]%2)!=0)
        {
            tot=tot+num[i];
        }
    }
    cout<<"\n\n\n Sum Of Odd Numbers Is : "<<tot;
    cout<<"\n\n";
    return tot;
}
int main()
{
    int s=sumodd();
    return 0;
}
