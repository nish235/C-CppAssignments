#include<iostream>
#include<conio.h>
using namespace std;
int are()
{
    int rad;
    float ar;
    cout<<"\n Enter Radius : ";
    cin>>rad;
    ar=3.14f*rad*rad;
    cout<<"\n Area = "<<ar;
    cout<<"\n\n";
    return ar;
}
int main()
{
    int a=are();
    return 0;
}
