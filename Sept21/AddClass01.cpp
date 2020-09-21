#include<iostream>
using namespace std;

class add
{
    public:
    int a,b,c;
    void getdata()
    {
        cout<<"\n Enter 1st Number : ";
        cin>>a;
        cout<<"\n Enter 2nd Number : ";
        cin>>b;
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
