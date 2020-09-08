#include<iostream>
#include<conio.h>
using namespace std;
void table()
{
    int num,i;
    int res=1;
    cout<<"\n Enter The Number : ";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        res=num*i;
        cout<<"\n\t"<<num<<" x "<<i<<" = "<<res;
    }
    cout<<"\n\n";
}
int main()
{
    table();
    return 0;
}
