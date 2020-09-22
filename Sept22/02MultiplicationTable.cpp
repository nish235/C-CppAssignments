#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"\n Enter The Number : ";
    cin>>num;
    for(i=0;i<=10;i++)
    {
        cout<<"\n\t "<<num<<" x \t"<< i<<"\t = \t"<<num*i;
    }
    cout<<"\n\n";
    return 0;
}
