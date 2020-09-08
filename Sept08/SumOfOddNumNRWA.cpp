#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void sumodd(int num[5])
{
    int i,tot=0;
    for(i=0;i<=5;i++)
    {
        if((num[i]%2)!=0)
        {
            tot=tot+num[i];
        }
    }
    cout<<"\n\n\n Sum Of Odd Numbers Is : "<<tot;
    cout<<"\n\n";
}
int main()
{
    int n[5];
    cout<<"\n Enter First Number  : ";
    cin>>n[0];
    cout<<"\n Enter Second Number : ";
    cin>>n[1];
    cout<<"\n Enter Third Number  : ";
    cin>>n[2];
    cout<<"\n Enter Fourth Number : ";
    cin>>n[3];
    cout<<"\n Enter Fifth Number  : ";
    cin>>n[4];
    sumodd(n);
    return 0;
}
