#include<iostream>
using namespace std;
int main()
{
    int n,rem,i,rev=0,num,chk=0;
    cout<<"\n PLEASE ENTER THE 5 DIGIT NUMBER : ";
    cin>>n;
    num=n;
    while(n>0)
    {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;
        chk++;
    }
    if(chk==5)
    {
        if(num==rev)
        {
            cout<<"\n Number "<<num<<" Is Palindrome ";
        }
        else
        {
            cout<<"\n Number "<<num<<" Is NOT Palindrome ";
        }
    }
    else
    {
        cout<<"\n Number Is Not 5 Digit ";
    }
    cout<<"\n\n";
 return 0;
}
