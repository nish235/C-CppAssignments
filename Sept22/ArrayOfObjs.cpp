#include <iostream>
using namespace std;

class record
{
    public:
    char name[30];
    char id[5];
    void addrecord();
    void display();

};
    void record :: addrecord()
    {
        cout<<"\n Enter First Name of Employee: ";
        cin>>name;
        cout<<"\n Enter Employee ID [max 4 digits]: ";
        cin>>id;
    }
   /* void update()
    {
            char checkId[5];
            cout<<"\n Enter employee id: ";
            cin>>checkId;
            if(strcmp(checkId,id)==0)
            {
                char newname[30];
                cout<<"\n Enter The New Name : ";
                cin>>newname;
            }
            else
            {
                cout<<"\n Your Name : ";
                cin>>name;
            }
    }*/
    void record :: display()
    {
        cout<<"\n Your Name : "<<name;
        cout<<"\n ID : "<<id;
    }


int main()
{
    record r[5];
    int i;
    for(i=0;i<5;i++)
    {
        r[i].addrecord();
    }
    for(i=0;i<5;i++)
    {
        r[i].display();
    }
    return 0;
}
