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
    struct student s1, s2, s3;
    strcpy(s1.name,"Rama");
    s1.age = 12;
    strcpy(s1.add,"hgvas");
    s1.rollNo = 32;

    strcpy(s2.name,"akash");
    s2.age = 14;
    strcpy(s2.add,"addgavjzhs");
    s2.rollNo = 19;

    cout<<"Student name :- "<<s1.name<<endl;
    cout<<"Age :- "<<s1.age<<endl;
    cout<<"Address :- "<<s1.add<<endl;
    cout<<"Roll No :- "<<s1.rollNo<<endl;

    cout<<"Student name :- "<<s2.name<<endl;
    cout<<"Age :- "<<s2.age<<endl;
    cout<<"Address :- "<<s2.add<<endl;
    cout<<"Roll No :- "<<s2.rollNo<<endl;

    return 0;
}
