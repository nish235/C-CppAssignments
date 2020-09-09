#include<iostream>
#include<conio.h>
using namespace std;
int div(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
		if((n%i)==0)
		{
			cout<<"\n\t"<<i;
		}
	}
	return i;
}
int main()
{
	int num;
	cout<<"\n Enter The Number : ";
	cin>>num;
	cout<<"\n DIVISORS OF THE NUMBER ARE : ";
	int d=div(num);
    cout<<"\n\n";

	return 0;
}
