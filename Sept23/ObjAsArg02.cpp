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
    void add(one cob1)
    {
        c=a+cob1.a;
        d=b+cob1.b;
        cout<<c<<" "<<d;

    }

};

int main()
{
    one ob1,ob2;
    ob1.setdata();
    ob2.setdata();
    ob2.add(ob1);
    //ob1.disp();
    cout<<"\n\n";
    return 0;
}
