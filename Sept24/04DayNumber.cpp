#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"\n Enter Day Number : ";
    cin>>day;
    switch(day)
    {
        case 1:
	       cout<<"\n Monday \n";
	       break;
        case 2:
	       cout<<"\n Tuesday \n";
	       break;
        case 3:
	       cout<<"\n Wednesday \n";
	       break;
        case 4:
	       cout<<"\n Thursday \n";
	       break;
        case 5:
	       cout<<"\n Friday \n";
	       break;
        case 6:
	       cout<<"\n Saturday \n";
	       break;
        case 7:
	       cout<<"\n Sunday  \n";
	       break;
        default:
	       cout<<"\n Invalid Input...\n";
	       break;
      }
      cout<<"\n\n";
      return 0;
}
