#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char st1[20],st2[20];
    int temp;
    cout<<"\n Enter The First String : ";
    cin>>st1;
    cout<<"\n Enter The Second String : ";
    cin>>st2;
    temp=strcmp(st1,st2);
    if(temp==0)
    {
        cout<<"\n ******* STRINGS ARE EQUAL ******* "<<endl;
    }
    else
    {
        cout<<"\n ******* STRINGS ARE NOT EQUAL ******* "<<endl;
    }
    return 0;
}
