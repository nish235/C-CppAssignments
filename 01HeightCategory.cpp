#include<iostream>
using namespace std;

int main()
{
    float h;
    cout<<"\n Enter The Height : ";
    cin>>h;
    if(h<150.0)
    {
        cout<<"\n The person height is below Average\n";
    }
    else if((h>=150.0) && (h<165.0))
    {
        cout<<"\n The person height is Average \n";
    }
    else if((h>=165.0) && (h<=195.0))
    {
        cout<<"\n The person is taller \n";
    }
    else
    {
        cout<<"\n Abnormal height \n ";
    }
    cout<<"\n\n";
    return 0;
}
