#include<iostream>
using namespace std;
void ascdsc(int a, int b)
{
    if (a<b)
    {
	  	cout<<"\n ASCENDING ORDER ";
    }
    else
    {
	  	cout<<"\n DESCENDING ORDER ";
    }
}
int main()
  {
	int n1,n2;
    cout<<"\n Enter The First Number  : ";
	cin>>n1;
    cout<<"\n Enter The Second Number : ";
	cin>>n2;
	ascdsc(n1,n2);
	cout<<"\n\n";
    return 0;
}
