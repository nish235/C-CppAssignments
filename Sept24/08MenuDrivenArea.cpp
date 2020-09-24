#include<iostream>
using namespace std;

int main ()
{
    int ch,s,r,l,w,b,h;
    float area;
    cout<<"\n 1. Area Of Square ";
    cout<<"\n 2. Area Of Rectangle ";
    cout<<"\n 3. Area Of Circle ";
    cout<<"\n 4. Area Of Triangle ";
    cout<<"\n 5. Exit ";
    cout<<"\n\n Enter your choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"\n\n AREA OF SQUARE ";
            cout<<"\n Enter The Side : ";
            cin>>s;
            area=s*s;
            break;
        case 2:
            cout<<"\n\n AREA OF RECTANGLE ";
            cout<<"\n Enter Length : ";
            cin>>l;
            cout<<"\n Enter Width  : ";
            cin>>w;
            area=l*w;
            break;
        case 3:
            cout<<"\n\n AREA OF CIRCLE ";
            cout<<"\n Enter The Radius : ";
            cin>>r;
            area=3.14*r*r;
            break;
        case 4:
            cout<<"\n\n AREA OF TRIANGLE ";
            cout<<"\n Enter The Base : ";
            cin>>b;
            cout<<"\n Enter The Height : ";
            cin>>h;
            area=0.5*b*h;
            break;
        case 5:
            break;
        default :
            cout<<"\n Invalid Input ";
            break;
    }
    cout<<"\n The area is : "<<area;
    cout<<"\n\n";
    return 0;
}
