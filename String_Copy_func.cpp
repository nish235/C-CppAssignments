#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char st1[10],st2[10];
    cout<<"\n Enter String : ";
    cin>>st1;
    strcpy(st2,st1);
    cout<<"\n String Is : "<<st2<<endl;
    return 0;
}
