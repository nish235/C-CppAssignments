#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int custid,unit;
    float chg,surchg=0,amt,netamt;
    char nm[25];

    cout<<"\n Enter Customer ID          : ";
    cin>>custid;
    cout<<"\n Enter the Name of Customer : ";
    cin>>nm;
    cout<<"\n Enter the Unit consumed    : ";
    cin>>unit;
    if(unit<200 )
    {
	    chg = 1.20;
    }
    else if(unit>=200 && unit<400)
    {
        chg = 1.50;
    }
	else if(unit>=400 && unit<600)
    {
        chg = 1.80;
    }
    else
    {
        chg = 2.00;
    }
    amt=unit*chg;
    if(amt>300)
	{
	    surchg=amt*15/100.0;
	}
    netamt=amt+surchg;
    if(netamt<100)
	{
	    netamt =100;
	}
    cout<<"\n Electricity Bill \n";
    cout<<"\n Customer IDNO                          : "<<custid<<endl;
    cout<<"\n Customer Name                          : "<<nm<<endl;
    cout<<"\n Unit Consumed                          : "<<unit<<endl;
    cout<<"\n Amount Charges per Unit                : "<<chg<<endl;
    cout<<"\n Amount To be Paid                      : "<<amt<<endl;
    cout<<"\n Surchage Amount                        : "<<surchg<<endl;
    cout<<"\n Net Amount Paid By the Customer        : "<<netamt<<endl;
    cout<<"\n\n";
    return 0;
}
