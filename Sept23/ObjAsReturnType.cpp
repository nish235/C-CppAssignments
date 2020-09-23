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
    one add(one cob2)
    {
        one tob;
        tob.a=a+cob2.a;
        tob.b=b+cob2.b;
        return tob;

    }
    void disp()
    {
        cout<<a<<"\t "<<b<<endl;
    }
};

int main()
{
    one ob1,ob2,ob3;
    ob1.setdata();
    ob2.setdata();
    ob3=ob1.add(ob2);
    ob3.disp();
    cout<<"\n\n";
    return 0;
}
