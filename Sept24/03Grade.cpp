#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char grd;

    cout<<"\n Enter the Grade : ";
    cin>>grd;
    grd=toupper(grd);
    switch(grd)
    {
    case 'E':
        cout<<"\n EXCELLENT ";
        break;
    case 'V':
        cout<<"\n VERY GOOD ";
        break;
    case 'G':
        cout<<"\n GOOD ";
        break;
    case 'A':
        cout<<"\n AVERAGE ";
        break;
    case 'F':
        cout<<"\n FAIL ";
        break;
    default :
        cout<<"\n INVALID INPUT ";
        break;
    }
    cout<<"\n\n";
    return 0;
}
