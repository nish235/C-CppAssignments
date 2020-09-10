#include<iostream>
using namespace std;
int main()
{
    float p;
    int i;
    double q;
    cout<<"\n n    2 to power n      2 to power -n";
    p=1;
    for(i=0;i<11;i++)
    {
        if(i==0)
        {
            p=1;
        }
        else
        {
            p=p*2;
        }
        q = 1.0 / (double) p;
        cout<<"\n "<<i<<"\t  "<<p<<"\t\t    "<<q;
    }
    return 0;
  }
