#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"\n Enter The Number : ";
    cin>>n;
    a=abs(n - 100);
    b=abs(n - 200);
    if(a <= 10 || b <= 10)
    {
        cout<<"\n TRUE ";
    }
    else
    {
        cout<<"\n FALSE ";
    }
    cout<<"\n\n";
    return 0;
}
