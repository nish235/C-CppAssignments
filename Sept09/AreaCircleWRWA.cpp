#include<iostream>
#include<conio.h>
using namespace std;
float area(int r)
{
    float ar=3.14f*r*r;
    return ar;
}
int main()
{
    int rad;
    cout<<"\n Enter The Radius Of Circle : ";
    cin>>rad;
    float x=area(rad);
    cout<<"\n Area = "<<x;
    cout<<"\n\n";
    return 0;
}
