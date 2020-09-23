#include<iostream>
using namespace std;

class one
{
    public:
    int a,b;
    void setdata()
    {
        a=2;
        b=3;
    }
    void add(one cob1)
    {
        cob1.a=12;
        cob1.b=20;

    }
    void disp()
    {
        cout<<a<<" "<<b;
    }
};

int main()
{
    one ob1;
    ob1.setdata();
    ob1.disp();

    ob1.add(ob1);
    ob1.disp();
    cout<<"\n\n";
    return 0;
}
