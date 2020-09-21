#include<iostream>
using namespace std;

class area
{
    public:
    int r;
    float ar,pi=3.14;
    void getdata()
    {
        cout<<"\n Enter The Number : ";
        cin>>r;
    }
    void calc()
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
    a.getdata();
    a.calc();
    a.display();
    cout<<"\n\n";
    return 0;
}
