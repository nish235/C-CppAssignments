#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<windows.h>
#include<unistd.h>
using namespace std;
int opt;
void options();

struct record
{
    char name[30];
    char id[5];
    char address[30];
    char city[15];
    long int phone;
};

void enter()
{
        cout<<"\n\n\n Press enter to go back \n\n";
        cin.get();
        cin.get();
}

void createrecord(struct record r)
{

        system("cls");
        cout<<"\n----------------------------------------";
        cout<<"\n Enter Name : ";
        cin>>r.name;
        cout<<"\n----------------------------------------";
        cout<<"\n Enter ID [max 4 digits] : ";
        cin>>r.id;
        cout<<"\n----------------------------------------";
        cout<<"\n Enter Address : ";
        cin>>r.address;
        cout<<"\n----------------------------------------";
        cout<<"\n Enter City : ";
        cin>>r.city;
        cout<<"\n----------------------------------------";
        cout<<"\n Enter Phone Number : ";
        cin>>r.phone;
        cout<<"\n----------------------------------------";

        char ch;
        cout<<"\nEnter 'y' to save above information\n";
        cin>>ch;
        if(ch=='y')
        {
            FILE  *file;
            file= fopen("record.txt","a");
            fprintf(file, "%s %s %s %s %d \n", r.name, r.id, r.address, r.city, r.phone );
            fclose(file);
            cout<<"\n New Record has been added to file \n";
        }
        else
            void createrecord(struct record r);
            enter();
            options();
}


void updaterecord(struct record r)
{
        system("cls");
        char checkId[5];
        cout<<"\n Enter Record ID : ";
        cin>>checkId;
        char newadrs[20];
        cout<<"\n-----------------------------";
        cout<<"\n Enter New Address : ";
        cin>>newadrs;
        int newphone;
        cout<<"------------------------------";
        cout<<"\n Enter New Phone Number : ";
        cin>>newphone;
        FILE *file, *tempfile;
        file= fopen("record.txt", "r");
        tempfile= fopen("temp.txt", "w");
        while(fscanf(file, "%s %s %s %s %d ", &r.name[0], &r.id[0] , &r.address[0], &r.city[0], &r.phone)!=EOF)
        {
            if(strcmp(checkId, r.id)==0)
                fprintf(tempfile, "%s %s %s %s %d  \n", r.name, r.id, newadrs, r.city, newphone );
            else
                fprintf(tempfile, "%s %s %s %s %d  \n", r.name, r.id, r.address, r.city, r.phone );
        }
        fclose(file);
        fclose(tempfile);
        int rem= remove("record.txt");
        int ren= rename("temp.txt", "record.txt");
        enter();
        options();
}


void searchrecord(struct record r)
{
        system("cls");
        FILE *file;
        char checkId[5];
        cout<<"\n\n Enter ID to Search : ";
        cin>>checkId;
        file= fopen("record.txt", "r");
        while(fscanf(file, "%s %s %s %s %d", &r.name[0], &r.id[0] , &r.address[0], &r.city[0], &r.phone)!=EOF)
            if(strcmp(checkId,r.id)==0)
            {
                cout<<"\n---------------------";
                cout<<"\n Name : "<<r.name;
                cout<<"\n---------------------";
                cout<<"\n Id : "<<r.id;
                cout<<"\n---------------------";
                cout<<"\n Address : "<<r.address;
                cout<<"\n---------------------";
                cout<<"\n City : "<<r.city;
                cout<<"\n---------------------";
                cout<<"\n Phone : "<<r.phone;
                cout<<"\n---------------------";
            }
            fclose(file);
            enter();
            options();
}


void displayrecord(struct record r)
{
        system("cls");
        FILE *file;
        file= fopen("record.txt", "r");
        cout<<"\n\t      DATA IN RECORD \n";
        cout<<"\n===============================================================================";
        cout<<"\n NAME \t\t ID \t\t ADDRESS \t\t CITY \t\t PHONE \n";
        cout<<"===============================================================================";
        while(fscanf(file, "%s %s %s %s %d ", &r.name[0], &r.id[0] , &r.address[0], &r.city[0], &r.phone)!= EOF)
            cout<<"\n "<<r.name<<"\t\t"<<r.id<<"\t\t"<<r.address<<"\t\t"<<r.city<<"\t\t"<<r.phone;
        fclose(file);
        enter();
        options();
}


void deleterecord(struct record r)
{
        system("cls");
        char checkId[5];
        cout<<"\n----------------------------------";
        cout<<"\nEnter Employee Id To Remove: ";
        cin>>checkId;
        char ch;
        cout<<"----------------------------------";
        cout<<"\n\n\n\n\nCONFIRMATION\nEnter 'y' To Confirm Deletion \n";
        cin>>ch;
        if(ch=='y')
        {
            FILE *file, *tempfile;
            file= fopen("record.txt", "r");
            tempfile= fopen("temp.txt", "w");
            while(fscanf(file, "%s %s %s %s %d ", &r.name[0], &r.id[0] , &r.address[0], &r.city[0], &r.phone)!=EOF)
                if(strcmp(checkId, r.id)!=0)
                    fprintf(tempfile, "%s %s %s %s %d \n", r.name, r.id, r.address, r.city, r.phone );
            fclose(file);
            fclose(tempfile);
            int rem= remove("record.txt");
            int ren= rename("temp.txt", "record.txt");
            cout<<"\n Record Removed Successfully..\n";
            enter();
            options();
        }
            else
               void deleterecord(struct record r);
}


void options()
{
            system("cls");
            cout<<"\n\t\t\t********  RECORD MANAGEMENT SYSTEM  ********";
            cout<<"\n";
            cout<<"\n\t\t\t------------------------------------------------";
            cout<<"\n\t\t\tENTER   1:   To Create Record ";
            cout<<"\n\t\t\t------------------------------------------------";
            cout<<"\n\t\t\tENTER   2:   To Update Record ";
            cout<<"\n\t\t\t------------------------------------------------";
            cout<<"\n\t\t\tENTER   3:   To Search Record ";
            cout<<"\n\t\t\t------------------------------------------------";
            cout<<"\n\t\t\tENTER   4:   To Display All Record ";
            cout<<"\n\t\t\t------------------------------------------------";
            cout<<"\n\t\t\tENTER   5:   To Delete Record ";
            cout<<"\n\t\t\t------------------------------------------------";
            cout<<"\n\t\t\tENTER   0:   To Exit     ";
            cout<<"\n\t\t\t------------------------------------------------";
            cout<<"\n\n\t\t\t   Please Enter Your Choice: ";
            cin>>opt;

}

void login()
{
    string pass="";
    char ch;
    cout <<"\n\n\n\n\t\t\t\t\t ---------------------------";
    cout <<"\n\t\t\t\t\t| RECORD MANAGEMENT SYSTEM  |";
    cout <<"\n\t\t\t\t\t ---------------------------";
    cout <<"\n\n\n\n\n\t\t\t\t\t Enter The Admin Password :";
    ch = _getch();
    while(ch != 13)
    {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(pass == "admin")
    {
        cout<<"\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t";
        for(int a=1;a<=8;a++)
        {
            Sleep(200);
            cout << "...";
        }
        cout << "\n\n\n\t\t\t\t\t LOGIN SUCCESSFUL!! \n\n\n";
        system("PAUSE");
        system("CLS");
    }
    else
    {
        cout << "\n\n\n\t\t\t\t\t LOGIN DENIED...!!\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}

int main()
{
    struct record r1;
    login();
    options();

    for(;;)
    {
        switch (opt)
            {
                case 0:
                    system("CLS");
                    cout<<"\n\t\t\t\t=================================";
                    cout<<"\n\t\t\t\t BYE...!!! Exiting Program...!!! ";
                    cout<<"\n\t\t\t\t=================================";
                    cout<<"\n\n\n";
                    return 0;
                case 1:
                    createrecord(r1);

                    break;

                case 2:
                    updaterecord(r1);

                    break;

                case 3:
                    searchrecord(r1);

                    break;

                case 4:
                    displayrecord(r1);

                    break;

                case 5:
                    deleterecord(r1);
                    break;

                default:
                    cout<<"\n\t\t\t\t Sorry! Wrong option..! \n";
                    cout<<"\n\t\t\t\t !!!...TRY AGAIN...!!!";
                    getch();
                    options();
                    break;
            }

    }
    return 0;
}
