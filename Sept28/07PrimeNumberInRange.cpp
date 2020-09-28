#include<iostream>
using namespace std;

int main()
{
    int num,i,ctr,stno,enno;

    cout<<"\n Enter Starting Number : ";
    cin>>stno;

    cout<<"\n Enter Ending Number : ";
    cin>>enno;

    cout<<"\n The prime numbers in the Range are : ";

    for(num=stno;num<=enno;num++)
    {
        ctr=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                ctr++;
                break;
            }
        }
        if(ctr==0 && num!= 1)
        {
            cout<<" "<<num;
        }
    }
    cout<<"\n\n";
    return 0;
}
