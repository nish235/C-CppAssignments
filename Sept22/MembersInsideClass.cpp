#include<iostream>
using namespace std;

class area
{
    int r;
    float pi=3.14,ar;
public:
    void getdata()
    {
        cout<<"\n Enter The Radius : ";
        cin>>r;
    }
    void calc()
    {
        ar=pi*r*r;
    }
    void display()
    {
        cout<<"\n AREA OF CIRCLE : "<<ar;
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
