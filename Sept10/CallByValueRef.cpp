#include<iostream>
using namespace std;
void fun(int *x,int *y)
{
    *x=12;
    *y=15;
}
int main()
{
    int a=2,b=3;
    cout<<"\n"<<a<<"\t"<<b;
    fun(&a,&b);
    cout<<"\n"<<a<<"\t"<<b;
    return 0;
}
