#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,res;
    cout<<"\n ENTER NUMBER : ";
    cin>>n;
    res=fact(n);
    cout<<"\n FACTORIAL OF "<<n<<" = "<<res;
    cout<<"\n\n";
    return 0;
}

int fact(int n)
{
    if (n>1)
    {
        return n*fact(n - 1);
    }
    else
    {
        return 1;
    }
}
