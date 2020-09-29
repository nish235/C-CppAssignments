#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
	int id,phone;
	char name[20],adr[30],city[10];
    void getstudent()
    {
        cout<<"\n Enter Student Id       : ";
        cin>>id;
        cout<<"\n Enter Student Name     : ";
        cin>>name;
        cout<<"\n Enter The Address      : ";
        cin>>adr;
        cout<<"\n Enter The City         : ";
        cin>>city;
        cout<<"\n Enter The Phone Number : ";
        cin>>phone;
    }

};

class exam : public student
{
public:
	int m,p,c;
	void getmarks()
	{
		cout<<"\n Enter Mathematics marks : ";
		cin>>m;
		cout<<"\n Enter Physics marks     : ";
		cin>>p;
		cout<<"\n Enter Chemistry marks   : ";
		cin>>c;
	}
};

class sports
{
public:
	int sp;
	void getsports()
	{
		cout<<"\n Enter Sports marks      : ";
		cin>>sp;
	}
};

class result : public exam, public sports
{
public :
	int tot;
	float avg;
    void showRes()
    {
		tot=m+p+c;
		avg=tot/3.0;
		cout<<"\n Total                  = "<<tot;
		cout<<"\n Average                = "<<avg;
		cout<<"\n Average + Sports marks = "<<avg+sp;
	}
};

int main()
{
	result r;
	r.getstudent();
	r.getmarks();
	r.getsports();
	r.showRes();
	cout<<"\n\n";
	return 0;
};
