#include<iostream>
using namespace std;
void fun(int i)
{
    if(i==10)
    {
        return;
    }
    cout<<"\n"<<i;
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}
