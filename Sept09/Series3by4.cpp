#include<iostream>
#include<conio.h>
using namespace std;
float ser()
{
    float z,i,j=1,sum=0;
    for(i=1;i<=7;i=i+2)
    {
		z=i/j;
		sum=sum+z;
		j=j*2;
	}
	return sum;
}
int main()
{
	float s=ser();
    cout<<"\n VALUE OF S : "<<s;
    cout<<"\n\n";
    return 0;
}
