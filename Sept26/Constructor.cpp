#include<iostream>
using namespace std;

class one
{
    public:
    int a,b;

    one()
    {
        cout<<"\n Enter The Two Values : "<<endl;
        cin>>a>>b;
    }
};

int main()
{
    one x;
    cout<<"\n SUM : "<<x.a+x.b;
    cout<<"\n\n";
    return 0;
}
