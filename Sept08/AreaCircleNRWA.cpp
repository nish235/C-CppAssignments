#include<iostream>
#include<conio.h>
using namespace std;
void area(int r)
{
    float ar=3.14f*r*r;
    cout<<"\n Area = "<<ar;
    cout<<"\n\n";
}
int main()
{
    int rad;
    cout<<"\n Enter The Radius Of Circle : ";
    cin>>rad;
    area(rad);
    return 0;
}
