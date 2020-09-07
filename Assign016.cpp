#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"\n Even numbers between 1 to 50 : ";
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
		  cout<<"\t"<<i;
		}
	}
	cout<<"\n\n";
	return 0;
}
