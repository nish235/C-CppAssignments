#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char user[5],ch,pass[5];
    int i=0,j=1;
    cout<<"\n LOGIN SCREEN ";
    while(j!=0)
    {
        cout<<"\n Enter The Username :";
        cin>>user;
        cout<<"\n Enter The Password : ";
        ch=getch();
        for(i=0;ch!='\r';i++)
        {

            pass[i]=ch;
            ch=getch();
            cout<<"*";
        }
        pass[i]='\0';


        if((strcmp(user,"admin") && strcmp(pass,"12345"))==0)
        {
            cout<<"\n\n LOGIN SUCCESSFUL ";

        }
        else
        {
            cout<<"\n\n USER DOESN'T EXIST ";
            j=1;
        }
    }
    cout<<"\n\n";
    return 0;
}

