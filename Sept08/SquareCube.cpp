#include<iostream>
using namespace std;
void sqcb(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
		cout<<"\n\t"<<i<<"\t"<<i*i<<"\t"<<i*i*i;
    }
}
int main()
{
	int num;
	cout<<"\n Enter The Number : ";
	cin>>num;
    sqcb(num);
    cout<<"\n\n";
	return 0;
}
