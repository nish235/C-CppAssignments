#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter 7 Digit Number : ";
    cin>>n;;
    cout<<"\n RESULT : ";
    cout<<"\t"<<(n/1000000);
    n=n-((n/1000000)*1000000);
    cout<<"\t"<<(n/100000);
    n= n-((n/100000)*100000);
    cout<<"\t"<<n/10000;
    n=n-((n/10000)*10000);
    cout<<"\t"<<(n/1000);
    n=n-((n/1000)*1000);
    cout<<"\t"<<(n/100);
    n=n-((n/100)*100);
    cout<<"\t"<<(n/10);
    n=n-((n/10)*10);
    cout<<"\t"<<(n%10);

    return 0;
}
