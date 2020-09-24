#include<iostream>
using namespace std;

int main()
{
    int d;

    cout<<"\n Enter Digit(0-9) : ";
    cin>>d;

    switch(d)
    {
        case 0:
            cout<<"\n Zero ";
            break;
        case 1:
            cout<<"\n One ";
            break;
        case 2:
            cout<<"\n Two ";
            break;
        case 3:
            cout<<"\n Three ";
            break;
        case 4:
            cout<<"\n Four ";
            break;
        case 5:
            cout<<"\n Five ";
            break;
        case 6:
            cout<<"\n Six ";
            break;
        case 7:
            cout<<"\n Seven ";
            break;
        case 8:
            cout<<"\n Eight ";
            break;
        case 9:
            cout<<"\n Nine ";
            break;
        default:
            cout<<"\n Invalid Digit...";
            break;
      }
      cout<<"\n\n";
      return 0;
}
