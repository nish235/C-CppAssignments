#include<iostream>
#include<conio.h>
using namespace std;
int even(int x)
{
    int e=2;
    while(e<x)
    {
        cout<<e<<endl;
        e+=2;
    }

    return e;
}
int main()
{
    int num;
    cout<<"\n Enter Number : ";
    cin>>num;
    int ev=even(num);
    cout<<ev;
    return 0;
}
