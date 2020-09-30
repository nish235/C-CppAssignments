#include<iostream>
using namespace std;

class One
{
public:
    void show()
    {
        cout<<"\n Hello this is the example of Virtual Base Class ";
    }
};

class Two : virtual public One
{
public:

};

class Three : virtual public One
{
public:

};

class Four : public Two, public Three
{
public:

};

int main()
{
    Four f;
    f.show();

    cout<<"\n\n";
    return 0;
}
