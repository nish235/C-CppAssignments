#include<iostream>
using namespace std;
int main()
{
	int  a,b;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    if((b%a)==0)
	{
		cout<<"\n It Is A Multiple ";
	}
	else
	{
		cout<<"\n It Is Not A Multiple ";
	}
    cout<<"\n\n";
	return 0;
}
