#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char st1[20],st2[20];
    cout<<"\n Enter First Name : ";
    cin>>st1;
    cout<<"\n Enter Last Name : ";
    cin>>st2;
    strcat(st1,st2);
    cout<<"\n String Is : "<<st1<<endl;
    return 0;
}
