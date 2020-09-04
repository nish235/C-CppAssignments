#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char st[10];
    cout<<"\n Enter String : ";
    cin>>st;
    strrev(st);
    cout<<"\n Reverse String Is : "<<st<<endl;
    return 0;
}
