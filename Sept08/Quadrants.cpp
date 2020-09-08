#include<iostream>
using namespace std;
void quad(float a,float b)
{
    if(a>0 && b>0)
    {
		cout<<"\n QUADRANT I (+,+) ";
	}
    else if(a>0 && b<0)
    {
        cout<<"\n QUADRANT II (+,-) ";
    }
    else if(a<0 && b<0)
    {
        cout<<"\n QUADRANT III (-,-) ";
    }
    else if(a<0 && b>0)
    {
        cout<<"\n QUADRANT IV (-,+) ";
    }
}

int main()
{
	int x, y;
    cout<<"\n ENTER THE COORDINATES "<<endl;
	cout<<"\n Enter X : ";
    cin>>x;
    cout<<"\n Enter Y : ";
    cin>>y;
    quad(x,y);
    cout<<"\n\n";
	return 0;
}
