#include<iostream>
using namespace std;

int main()
{
    int num,r,sum=0,temp;
    cout<<"\n Enter The Number : ";
    cin>>num;
    for(temp=num;num!=0;num=num/10)
    {
         r=num%10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
    {
        cout<<"\n "<<temp<<" is an Armstrong number ";
    }
    else
    {
        cout<<"\n "<<temp<<" is not an Armstrong number ";
    }
    cout<<"\n\n";
    return 0;
}
