#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"\n Enter Number : ";
	cin>>n;
	cout<<"\n SQUARE OF NUMBERS BETWEEN 1 & "<<n<<endl;
	for(i=2;i<=n;i++)
    {
		if((i%2)==0)
		{
			cout<<"\n\t"<<i<<"\t"<<i*i;
		}
	}
    cout<<"\n\n";
	return 0;
}
