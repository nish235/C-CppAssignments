#include<iostream>
using namespace std;

class great
{
    public:
    int a,b;
    void getdata()
    {
        cout<<"\n Enter 1st Number : ";
        cin>>a;
        cout<<"\n Enter 2nd Number : ";
        cin>>b;
    }
    void display()
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
    g.getdata();
    g.display();
    cout<<"\n\n";
    return 0;
}
