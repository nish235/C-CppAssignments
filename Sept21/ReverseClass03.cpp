#include<iostream>
using namespace std;

class rev
{
    public:
    void display(int n1)
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
    x.display(10);
    cout<<"\n\n";
    return 0;
}
