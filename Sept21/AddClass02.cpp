#include<iostream>
using namespace std;

class add
{
    public:
    int a,b,c;
    void getdata()
    {
        a=12;
        b=13;
    }
    void calc()
    {
        c=a+b;
    }
    void display()
    {
        cout<<"\n SUM is : " <<c;
    }
};

int main()
{
    add ob1;
    ob1.getdata();
    ob1.calc();
    ob1.display();
    cout<<"\n\n";
    return 0;
}
