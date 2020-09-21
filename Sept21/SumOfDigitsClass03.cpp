#include<iostream>
using namespace std;

class sod
{
    public:
    int t,s=0;
    void calc(int n)
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
    sd.calc(1234);
    sd.display();
    cout<<"\n\n";
    return 0;
}
