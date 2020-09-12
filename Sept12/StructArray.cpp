#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct student
{
    char name[10];
    int age;
    char add[50];
    int rollNo;
};
int main()
{
    struct student s[5];
    int rn, i, ctr = 0;
    cout<<"Enter the student details"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"\n Enter The Name  : ";
        cin>>s[i].name;
        cout<<"\n Enter Age       : ";
        cin>>s[i].age;
        cout<<"\n Enter Address   : ";
        cin>>s[i].add;
        cout<<"\n Enter Roll No.  : ";
        cin>>s[i].rollNo;
    }
    cout<<"\n Enter Roll Number to show data : ";
    cin>>rn;
    for(i=0;i<5;i++)
    {
        if(s[i].rollNo == rn)
        {
            ctr = 1;
            cout<<"\n Student name : "<<s[i].name;
            cout<<"\n Age          : "<<s[i].age;
            cout<<"\n Address      : "<<s[i].add;
            cout<<"\n Roll No      : "<<s[i].rollNo;
        }
    }

    if(ctr == 0)
    {
        cout<<"\n DOES NOT EXIST";
    }
    return 0;
}
