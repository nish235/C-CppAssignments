#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int rno,p,c,m,tot;
    float per;
    char nm[20],div[10];
    cout<<"\n Enter the Roll Number           : ";
    cin>>rno;
    cout<<"\n Enter the Name of the Student   : ";
    cin>>nm;
    cout<<"\n Input  the marks of Physics     : ";
    cin>>p;
    cout<<"\n Input  the marks of Chemistry   : ";
    cin>>c;
    cout<<"\n Input  the marks of Mathematics : ";
    cin>>m;
    tot=p+c+m;
    cout<<"\n TOTAL MARKS OBTAINED            : "<<tot;
    per=tot/3.0;
    cout<<"\n PERCENTAGE OBTAINED             : "<<per;
    cout<<"\n DIVISION                        : ";
    if(per>=75)
    {
        cout<<"DISTINCTION ";
    }
    else if(per<75&&per>=60)
    {
        cout<<"FIRST CLASS ";
    }
	else if(per<60&&per>=45)
    {
        cout<<"SECOND DIVISION ";
    }
    else if(per<45&&per>=35)
    {
        cout<<"THIRD DIVISION ";
    }
    else
    {
        cout<<"FAIL ";
    }
    cout<<"\n\n";
    return 0;
}
