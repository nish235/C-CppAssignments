#include<iostream>
using namespace std;
void seq(int a,int b)
{
    int i,j,l=1;
    for(i=1;i<=a;i++)
    {
		for(j=1;j<=b;j++)
	 	{
		  cout<<"\t "<<l;
		  l++;
        }
        cout<<"\n";
    }
}
int main() {
	int n1,n2;
	cout<<"\n Enter Horizontal Lines : ";
	cin>>n1;
	cout<<"\n Enter Vertical Lines   : ";
	cin>>n2;
    seq(n1,n2);
    cout<<"\n\n";
    return 0;
}
