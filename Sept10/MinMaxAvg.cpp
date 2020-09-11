#include<iostream>
using namespace std;
int main()
{
    int n,ctr=0,mn,mx,s=0;
    double avg;
    cout<<"\n Enter The Number : ";
    cin>>n;
    if(n<=0)
    {
        return 0;
    }
    mn=n;
    mx=n;
    while(n>0)
    {
        s=s+n;
        ctr++;
        if(mx>n)
        {
            mx=n;
        }
        if(mn<n)
        {
            mn=n;
        }
        cout<<"\n Enter The Number : ";
        cin>>n;
    }
    avg = s / (double) ctr;
    cout<<"\n Number of Positive Values Entered : "<<ctr;
    cout<<"\n Maximum Number Is : "<<mx;
    cout<<"\n Minimum Number Is : "<<mn;
    cout<<"\n Average Is : "<<avg;
    cout<<"\n\n";
    return 0;
  }
