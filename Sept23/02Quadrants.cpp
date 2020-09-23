#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"\n Enter x : ";
	cin>>x;
	cout<<"\n Enter y : ";
	cin>>y;

	if(x>0 && y>0)
    {
        cout<<"\n The coordinate point lies in the First quadrant (+,+) \n";
    }
	else if(x<0 && y>0)
    {
        cout<<"\n The coordinate point lies in the Second quadrant (-,+) \n";
    }
	else if(x<0 && y<0)
    {
        cout<<"\n The coordinate point lies in the Third quadrant (-,-) \n";
    }
	else if(x>0 && y<0)
    {
        cout<<"\n The coordinate point lies in the Fourth quadrant (+,-) \n";
    }
	else if(x==0 && y==0)
    {
        cout<<"\n The coordinate point lies on the quadrant (0,0) \n";
    }
    cout<<"\n\n";
    return 0;
}
