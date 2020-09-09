#include<iostream>
#include<conio.h>
using namespace std;
int squ(int x)
{
    int sq=x*x;
    return sq;
}
int main()
{
    int num;
    cout<<"\n Enter Number : ";
    cin>>num;
    int s=squ(num);
    cout<<"\n Square Of The Number : "<<s;
    cout<<"\n\n";
    return 0;
}
