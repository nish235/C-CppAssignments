#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"\n Enter Value to be Swapped : \n";
    cout<<" ENTER FIRST NUMBER  : ";
    cin>>n1;
    cout<<" ENTER SECOND NUMBER : ";
    cin>>n2;
    cout<<"\n BEFORE SWAPPING : \t"<<n1<<"\t"<<n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"\n AFTER SWAPPING  : \t"<<n1<<"\t"<<n2;
    cout<<"\n\n";
    return 0;
}
