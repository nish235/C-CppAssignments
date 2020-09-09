#include<iostream>
using namespace std;
float series()
{
    float sum=0;
	int i;
	for(i=1;i<=50;i++)
	{
		sum=sum+(float)1/i;
    }
    return sum;
}
int main()
{
    float S=series();
    cout<<"\n VALUE OF S : "<<S;
    cout<<"\n\n";
	return 0;
}
