#include<iostream>
using namespace std;

class sod
{
    public:
    int n,t,s=0;
    void getdata()
    {
        n=12345;
    }
    void calc()
    {
        while(n>0)
        {
            t=n%10;
            s=s+t;
            n=n/10;
        }
    }
    void display()
    {
        cout<<"\n SUM OF DIGITS : "<<s;
    }
};

int main()
{
    sod sd;
    sd.getdata();
    sd.calc();
    sd.display();
    cout<<"\n\n";
    return 0;
}
