#include<iostream>
using namespace std;

int main ()
{
    int ch,a,b;
    cout<<"\n 1. Addition ";
    cout<<"\n 2. Subtraction ";
    cout<<"\n 3. Multiplication ";
    cout<<"\n 4. Division ";
    cout<<"\n 5. Exit ";
    cout<<"\n\n Enter your choice : ";
    cin>>ch;
    cout<<"\n Enter 1st Number : ";
    cin>>a;
    cout<<"\n Enter 2nd Number : ";
    cin>>b;
    switch(ch)
    {
        case 1:
            cout<<"\n Addition ";
            cout<<"\n "<<a+b;
            break;
        case 2:
            cout<<"\n Subtraction ";
            cout<<"\n "<<a-b;
            break;
        case 3:
            cout<<"\n Multiplication ";
            cout<<"\n "<<a*b;
            break;
        case 4:
            cout<<"\n Division ";
            cout<<"\n "<<a/b;
            break;
        case 5:
            break;
        default :
            cout<<"\n Invalid Entry ";
    }
    cout<<"\n\n";
    return 0;
}
