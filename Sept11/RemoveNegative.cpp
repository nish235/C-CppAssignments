#include<iostream>
using namespace std;
#define N 10
int abs(int y)
{
    if(y<0)
        return(y*(-1));
    else
        return(y);
}
int main()
{
    int x,res;
    cout<<"\n Enter Any Negative Number : ";
    cin>>x;
    cout<<"\n Original Number = "<<x<<endl;
    res=abs(x);
    cout<<"\n Value After Conversion = "<<res;
    cout<<"\n\n";
    return 0;
}


