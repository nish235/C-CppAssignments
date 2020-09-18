#include <iostream>
using namespace std;

int main()
{
    int a;
    double b;

    int& r=a;
    double& s=b;

    a=10;
    cout<<"\n Value of a : "<<a;
    cout<<"\n Value of a reference : "<<r;

    b=3.147;
    cout<<"\n Value of b : "<<b;
    cout<<"\n Value of b reference : "<<s;

    cout<<"\n\n";
    return 0;
}
