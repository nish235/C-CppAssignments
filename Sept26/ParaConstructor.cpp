#include<iostream>
using namespace std;

class one
{
public:
    int a,b,c;
    one(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;

    }

};

int main()
{
    one o1(12,13,15);
    one o2(1,2,3);

    cout<<"\n "<<o1.a<<"\t"<<o1.b<<"\t"<<o1.c;
    cout<<"\n "<<o2.a<<"\t"<<o2.b<<"\t"<<o2.c;

    cout<<"\n\n";
    return 0;
}
