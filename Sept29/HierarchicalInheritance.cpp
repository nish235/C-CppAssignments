#include<iostream>
using namespace std;

class One
{
public:
    int a;
    One()
    {
        a=10;
        cout<<"\n"<<a;
    }
};

class Two : public One
{
public:
    int b;
    Two()
    {
        b=20;
        cout<<"\n"<<b;
    }
};

class Three : public One
{
public:
    int c;
    Three()
    {
        c=40;
        cout<<"\n"<<c;
    }
};

int main()
{
    Two o1;
    cout<<"\n";
    Three o2;
    cout<<"\n\n";
    return 0;
}
