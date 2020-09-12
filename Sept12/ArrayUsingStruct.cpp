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
    struct student s[4];
    cout<<"\n Enter the student details :";
    for(int i=0;i<5;i++)
    {
        cout<<"\n Enter Name : ";
        cin>>s[i].name;
        cout<<"\n Enter Age : ";
        cin>>s[i].age;
        cout<<"\n Enter Address";
        cin>>s[i].add;
        cout<<"\n Enter Roll No.";
        cin>>s[i].rollNo;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\n Student name :- "<<s[i].name;
        cout<<"\n Age :- "<<s[i].age;
        cout<<"\n Address :- "<<s[i].add;
        cout<<"\n Roll No :- "<<s[i].rollNo;
    }

    return 0;
}
