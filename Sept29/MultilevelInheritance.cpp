#include<iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout<<"\n This is the Vehicle ";
    }
};

class four : public Vehicle
{
public:
    four()
    {
        cout<<"\n Four Wheeler Vehicle ";
    }
};

class Car : public four
{
public:
    Car()
    {
        cout<<"\n Car has 4 wheels ";
    }
};

int main()
{
    Car obj;
    cout<<"\n\n";
    return 0;
}
