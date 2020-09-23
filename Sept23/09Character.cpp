#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"\n Enter Character : ";
    cin>>ch;

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        cout<<"\n This is an alphabet " ;
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"\n This is a digit ";
    }
    else
    {
        cout<<"\n This is a special character ";
    }
    cout<<"\n\n";
    return 0;
}
