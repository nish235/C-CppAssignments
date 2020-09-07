#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2,dist;
    cout<<"\n Enter The Points "<<endl;
	cout<<"\n Enter x1 : ";
	cin>>x1;
	cout<<"\n Enter y1 : ";
	cin>>y1;
    cout<<"\n Enter x2 : ";
	cin>>x2;
	cout<<"\n Enter y2 : ";
	cin>>y2;
	dist=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	cout<<"\n Distance Between Points : "<<sqrt(dist)<<endl;
	return 0;
}
