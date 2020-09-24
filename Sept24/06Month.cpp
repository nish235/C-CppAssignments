#include<iostream>
using namespace std;

int main()
{
    int m;

    cout<<"\n Enter Month in Digit(1-12) : ";
    cin>>m;

    switch(m)
    {
        case 1:
            cout<<"\n JANUARY ";
            break;
        case 2:
            cout<<"\n FEBRUARY ";
            break;
        case 3:
            cout<<"\n MARCH ";
            break;
        case 4:
            cout<<"\n APRIL ";
            break;
        case 5:
            cout<<"\n MAY ";
            break;
        case 6:
            cout<<"\n JUNE ";
            break;
        case 7:
            cout<<"\n JULY ";
            break;
        case 8:
            cout<<"\n AUGUST ";
            break;
        case 9:
            cout<<"\n SEPTEMBER ";
            break;
        case 10:
            cout<<"\n OCTOBER ";
            break;
        case 11:
            cout<<"\n NOVEMBER ";
            break;
        case 12:
            cout<<"\n DECEMBER ";
            break;
        default:
            cout<<"\n Invalid Entry...";
            break;
      }
      cout<<"\n\n";
      return 0;
}
