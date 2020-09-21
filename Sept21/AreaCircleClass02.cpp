#include<iostream>
using namespace std;

class area
{
    public:
    float ar,pi=3.14;
    void calc(int r)
    {
        ar=pi*r*r;
    }
    void display()
    {
        cout<<"\n AREA OF CIRCLE : " <<ar;
    }
};

int main()
{
    area a;
    a.calc(3);
    a.display();
    cout<<"\n\n";
    return 0;
}
