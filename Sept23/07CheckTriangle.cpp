#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"\n Enter a : ";
    cin>>a;
    cout<<"\n Enter b : ";
    cin>>b;
    cout<<"\n Enter c : ";
    cin>>c;
    if(a==b && b==c)
    {
        cout<<"\n EQUILATERAL TRIANGLE ";
    }
    else if(a==b || a==c || b==c)
    {
        cout<<"\n ISOSCELES TRIANGLE ";
    }
    else
    {
        cout<<"\n SCALENE TRIANGLE ";
    }
    cout<<"\n\n";
    return 0;
}
