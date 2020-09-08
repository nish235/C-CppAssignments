#include<iostream>
using namespace std;
void avg(int m[20])
{
    int i,j=0,tot=0;
	float avrg;
	cout<<"\n Enter Mathematics Marks (0 to exit) : "<<endl;
	for(i=0; ;i++)
	{
		cin>>m[i];
		if(m[i]<= 0)
        {
            break;
		}
		j++;
		tot=tot+m[i];
	}
	avrg=tot/j;
	cout<<"\n Average Marks in Mathematics : "<<avrg;
}
int main()
{
    int num[20];
	avg(num);
	cout<<"\n\n";
	return 0;
}
