#include<iostream>
using namespace std;

class area
{
    int r;
    float pi=3.14,ar;
    public:
    void getdata();
    void calc();
    void display();
};

void area :: getdata()
{
    cout<<"\n Enter The Radius : ";
    cin>>r;
}

void area :: calc()
{
    ar=pi*r*r;
}

void area :: display()
{
    cout<<"\n AREA OF CIRCLE : "<<ar;
}

int main()
{
    area a;
    a.getdata();
    a.calc();
    a.display();
    cout<<"\n\n";
    return 0;
}
