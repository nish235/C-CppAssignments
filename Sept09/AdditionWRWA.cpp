#include<iostream>
#include<conio.h>
using namespace std;
int addi(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int n1,n2;
    cout<<"\n Enter Number 1 : ";
    cin>>n1;
    cout<<"\n Enter Number 2 : ";
    cin>>n2;
    int x=addi(n1,n2);
    cout<<"\n ADDITION OF NUMBERS IS : "<<x;
    cout<<"\n\n";
    return 0;
}
