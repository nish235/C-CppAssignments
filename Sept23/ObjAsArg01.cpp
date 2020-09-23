#include<iostream>
using namespace std;

class one
{
    public:
    int a,b,c,d;
    void setdata()
    {
        a=2;
        b=3;
    }
    void add()
    {
        c=a+a;
        d=b+b;

    }
    void disp()
    {
        cout<<c<<" "<<d;
    }
};

int main()
{
    one ob1;
    ob1.setdata();
    ob1.add();
    ob1.disp();
    cout<<"\n\n";
    return 0;
}
