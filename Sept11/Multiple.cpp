#include<iostream>
using namespace std;
int mult(int n1, int n2)
{
    return n1%n2 == 0;
}
int main()
{
    int n1, n2;
    cout<<"\n Enter First Number  : ";
    cin>>n1;;
    cout<<"\n Enter Second Number : ";
    cin>>n2;
    cout<<"\n\n";
    if(mult(n1, n2))
        cout<<" "<<n1<<" Is Multiple Of "<<n2<<endl;
    else
        cout<<" "<<n1<<" Is Not A Multiple Of "<<n2<<endl;
    cout<<"\n";
    return 0;
}
