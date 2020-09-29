#include<iostream>
using namespace std;

class Parent
{
public:
    int a;
};

class Child : public Parent
{
public:
    int b;
};

int main()
{
    Child ob1;
    ob1.b=9;
    ob1.a=23;
    cout<<"\n Child  Value Is : "<<ob1.b;
    cout<<"\n Parent Value Is : "<<ob1.a;
    cout<<"\n Addition        : "<<ob1.b+ob1.a;
    cout<<"\n\n";
    return 0;
}
