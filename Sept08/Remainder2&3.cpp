#include<iostream>
using namespace std;
void rem(int a,int b)
{
    int i;
    for(i=a+1;i<b;i++)
	{
		if((i%7)==2 || (i%7)==3)
        {
			cout<<"\n\t"<<i;
		}
	}
}
int main()
{
	int n1,n2;
    cout<<"\n Input the first integer : ";
    cin>>n1;
    cout<<"\n Input the second integer : ";
    cin>>n2;
    cout<<"\n Numbers Divided by 7 and Remainders are 2 & 3 : "<<endl;
    rem(n1,n2);
    cout<<"\n\n";
	return 0;
}
