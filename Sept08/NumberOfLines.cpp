#include<iostream>
using namespace std;
void prnt(int num)
{
    int i,j=1,a=0;
    for(i=1;i<=num;i++)
    {
		while(a<3)
		{
			cout<<"\t "<<j++;
			a++;
		}
		a=0;
		cout<<"\n";
	}
}
int main()
{
	int n;
	cout<<"\n Enter Number Of Lines : ";
	cin>>n;
    prnt(n);
    cout<<"\n\n";
	return 0;
}
