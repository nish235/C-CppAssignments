#include<iostream>
using namespace std;

int main()
{
    int num,r,sum=0,t;

    cout<<"\n Enter The Number : ";
    cin>>num;

    for(t=num;num!=0;num=num/10)
    {
        r=num % 10;
        sum=sum*10+r;
    }
    if(t==sum)
    {
        cout<<"\n PALINDROME NUMBER ";
    }
    else
    {
        cout<<"\n NOT A PALINDROME NUMBER ";
    }
    cout<<"\n\n";
    return 0;

}
