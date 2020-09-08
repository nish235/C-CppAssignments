#include<iostream>
#include<conio.h>
using namespace std;
void table(int num)
{
    int res=1,i;
    for(i=1;i<=10;i++)
    {
        res=num*i;
        cout<<"\n\t"<<num<<" x "<<i<<" = "<<res;
    }
    cout<<"\n\n";
}
int main()
{
    int n;
    cout<<"\n Enter The Number : ";
    cin>>n;
    table(n);
    return 0;
}
