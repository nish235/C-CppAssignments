#include<iostream>
#include<conio.h>
using namespace std;
void pwd(int p)
{
    int i=1;
    while (i!=0)
	{
	    cout<<"\n Enter The Password In Numbers (No Alphabets Allowed) : ";
        cin>>p;
        if (p==1234)
        {
            cout<<"\n Congratulations!!! CORRECT PASSWORD ";
            i=0;
        }
        else
        {
            cout<<"\n INCORRECT PASSWORD !! Please Try Again ";
        }
        cout<<"\n\n";
	}
}

int main()
{
    int ps;
    pwd(ps);
	cout<<"\n\n";
    return 0;
}
