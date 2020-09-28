#include<iostream>
using namespace std;

int main()
{
    int num,r,sum,temp;
    int stno,enno;

    cout<<"\n Enter Starting Number : ";
    cin>>stno;

    cout<<"\n Enter Ending Number : ";
    cin>>enno;

    cout<<"\n Armstrong Numbers in given range are : ";
    for(num=stno;num<=enno;num++)
    {
        temp=num;
        sum = 0;
        while(temp!=0)
        {
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
        }
        if(sum==num)
        {
             cout<<" "<<num;
        }
    }
    cout<<"\n\n";
    return 0;
}

