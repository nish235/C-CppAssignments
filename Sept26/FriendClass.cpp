#include<iostream>
using namespace std;

class B;

class A
{
    int a=12;
    friend int add(A,B);
};

class B
{
    int b=13;
    friend int add(A,B);
};

int add(A x,B y)
{
    return (x.a+y.b);
}

int main()
{
    A x;
    B y;
    cout<<"\n SUM : "<<add(x,y);
    cout<<"\n\n";
    return 0;
}
