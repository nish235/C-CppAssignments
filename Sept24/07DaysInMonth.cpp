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
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
	       cout<<"\n Month have 31 days \n";
	       break;
        case 2:
	       cout<<"\n The 2nd month is a February and have 28 days \n";
	       cout<<"\n In leap year The February month  Have 29 days\n";
	       break;
        case 4:
        case 6:
        case 9:
        case 11:
	       cout<<"\n Month have 30 days \n";
	       break;
        default:
	       cout<<"\n Invalid Entry..\n";
	       break;
      }
      cout<<"\n\n";
      return 0;
}
