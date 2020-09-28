#include<iostream>
#include<string.h>
using namespace std;

class one
{
public :
    string n;
    int length;

	one()
	{
		length=0;
    	n=new char[length+1];
    	cout<<"\n Enter The String : ";
    	cin>>n;
	}

	one(string s)
    {
		length=s.length();
		n=new char[length+1];
		n=s;
	}

	void display()
    {
		cout <<"\n"<<n<<" Number of characters in the string is : "<<n.length()<<endl;
	}

};


int main ()
{
    one o1;
    o1.display();

    cout<<"\n\n";
    return 0;
}
