#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int c=0;
    char st[10];
    cout<<"\n Enter Name : ";
    cin>>st;
    for(int i=0;st[i]!='\0';i++)
    {
        c=c+1;
    }
    cout<<"\n Length Of String Is : "<<c<<endl;
    return 0;
}
