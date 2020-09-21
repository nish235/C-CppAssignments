#include<iostream>
using namespace std;

class great
{
    public:
    void display(int a, int b)
    {
        if(a>b)
        {
            cout<<"\n Number "<< a <<" is Greater ";
        }
        else
        {
            cout<<"\n Number "<< b <<" is Greater ";
        }
    }
};
int main()
{
    great g;
    g.display(23,56);
    cout<<"\n\n";
    return 0;
}
