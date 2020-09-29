#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n1,onum,r,result=0,n=0;
    cout<<"\n Enter The Number : ";
    cin>>n1;
    cout<<endl;
    onum = n1;
    while(onum != 0)
    {
        onum=onum/10;
        ++n;
    }
    onum = n1;
    while (onum != 0)
    {
        r=onum%10;
        result+=pow(r,n);
        onum=onum/10;
    }

    if(result == n1)
    {
        cout<<" "<<n1<<" is an Armstrong number ";
    }
    else
    {
        cout<<" "<<n1<<" is not an Armstrong number ";
    }
    cout<<"\n\n";
    return 0;
}
