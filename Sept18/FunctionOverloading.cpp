#include<iostream>
using namespace std;

//Area Of Circle
float area(int a)
{
    return (3.14*a*a);
}

//Area Of Rectangle
float area(int a, int b)
{
    return (a*b);
}

//Area Of Cuboid
float area(int a,int b,int c)
{
    return (a*b*c);
}

int main()
{
    cout<<"\n The Area Of Circle Is : "<<area(3);
    cout<<"\n The Area Of Reactangle Is : "<<area(3,4);
    cout<<"\n The Area Of Cuboid Is : "<<area(2,3,4);
    cout<<"\n\n";
    return 0;
}
