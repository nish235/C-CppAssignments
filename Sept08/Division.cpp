#include<iostream>
using namespace std;
void div(float a,float b)
{
    float res;
    if(b!=0)
    {
        res=a/b;
		cout<<"\n DIVISON IS POSSIBLE "<<endl;
		cout<<"\n After Division = "<<res;
    }
	else
    {
	 	cout<<"\n DIVISION NOT POSSIBLE ";
    }
}
int main() {
	float n1,n2;
    cout<<"\n Enter First Number (x)  : ";
    cin>>n1;
    cout<<"\n Enter Second Number (y) : ";
    cin>>n2;
    div(n1,n2);
    cout<<"\n\n";
    return 0;
}
