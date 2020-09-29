#include<iostream>
using namespace std;

class Two
{
public:
    int b;
    void setdata2()
    {
        b=20;
    }
    void disp2()
    {
        cout<<"\n"<<b;
    }
};

class Three
{
public:
    int c;
    void setdata3()
    {
        c=30;
    }
    void disp2()
    {
        cout<<"\n"<<c;
    }
};

class One : public Two, public Three
{
public:
    int a;
    void setdata1()
    {
        a=10;
    }
    void disp1()
    {
        cout<<"\n"<<a;
    }
};

int main()
{
    One obj1;
    obj1.setdata1();
    obj1.disp1();
    obj1.setdata2();
    obj1.Two::disp2();
    obj1.setdata3();
    obj1.Three::disp2();

    cout<<"\n\n";
    return 0;
}
