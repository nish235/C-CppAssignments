#include<iostream>
using namespace std;
void area()
{
    int rad;
    float area;
    cout<<"\n Enter Radius : ";
    cin>>rad;
    area=3.14f*rad*rad;
    cout<<"\n Area = "<<area;
    cout<<"\n\n";
}
int main()
{
    area();
    return 0;
}
