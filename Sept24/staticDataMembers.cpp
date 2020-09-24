#include<iostream>
using namespace std;
static int a;
class one
{

    //static int a;
    public:
    void st()
    {
        a++;
    }
    void disp()
    {
        cout<<"\n"<<a;
    }
};

int main()
{
    one ob1,ob2,ob3;
    ob1.disp();
    ob2.disp();
    ob3.disp();
    ob3.st();
    ob1.disp();
    ob2.disp();
    ob3.disp();
    return 0;
}
