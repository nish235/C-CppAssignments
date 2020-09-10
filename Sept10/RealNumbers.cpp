#include<iostream>
using namespace std;
int main()
{
    double n1,n2,n3,n4;
    double max,min;
    cout<<"\n ENTER FOUR NUMBERS \n";
    cout<<"\n Enter 1st Number : ";
    cin>>n1;
    cout<<"\n Enter 2nd Number : ";
    cin>>n2;
    cout<<"\n Enter 3rd Number : ";
    cin>>n3;
    cout<<"\n Enter 4th Number : ";
    cin>>n4;

    //for Maximum Number
    if(n1>=n2 && n1>=n3 && n1>=n4)
    {
        max=n1;
    }
    else if(n2>=n1 && n2>=n3 && n2>=n4)
    {
        max=n2;
    }
    else if(n3>=n1 && n3>=n2 && n3>=n4)
    {
        max=n3;
    }
    else
    {
        max=n4;
    }


    //For Minimum Number
    if(n1<=n2 && n1<=n3 && n1<=n4)
    {
        min=n1;
    }
    else if(n2<=n1 && n2<=n3 && n2<=n4)
    {
        min=n2;
    }
    else if(n3<=n1 && n3<=n2 && n3<=n4)
    {
        min=n3;
    }
    else
    {
        min=n4;
    }
    cout<<"\n MAXIMUM NUMBER IS : "<<max<<endl;
    cout<<"\n MINIMUM NUMBER IS : "<<min<<endl;
    cout<<"\n DIFFERENCE BETWEEN MAXIMUM AND MINIMUM IS : "<<max-min;
    cout<<"\n\n";
    return 0;
  }
