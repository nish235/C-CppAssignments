#include<iostream>
using namespace std;
int main()
{
    int temp,n;
    float x,y;
    cout<<"\n Enter X : ";
    cin>>x;
    cout<<"\n Enter n : ";
    cin>>n;
    y=1.0;
    temp=1;
    while(temp<=n)
    {
        y=y*x;
        temp++;
    }
    cout<<"\n Entered X : "<<x;
    cout<<"\n Entered n : "<<n;
    cout<<"\n (x^n) is  : "<<y;
    cout<<"\n\n";
    return 0;
}
