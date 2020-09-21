#include<iostream>
using namespace std;

class rev
{
    public:
    int n1;
    void getdata()
    {
        n1=10;
    }
    void display()
    {
        while(n1>=1)
        {
            cout<<"\n"<<n1;
            n1--;
        }
    }
};

int main()
{
    rev x;
    x.getdata();
    x.display();
    cout<<"\n\n";
    return 0;
}
