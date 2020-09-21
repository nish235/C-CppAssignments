#include<iostream>
using namespace std;

class add
{
    public:
    int c;
    void calc(int a,int b)
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
    ob1.calc(12,13);
    ob1.display();
    cout<<"\n\n";
    return 0;
}
