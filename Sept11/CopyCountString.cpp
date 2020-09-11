#include<iostream>
using namespace std;
#define N 10
int main()
{
    char st1[50],st2[50];
    int i;
    cout<<"\n Enter The String : ";
    cin>>st1;
    for(i=0;st1[i]!='\0';i++)
    {
        st2[i]=st1[i];
    }
    st2[i]='\0';
    cout<<"\n";
    cout<<"\n Original String : "<<st2<<endl;
    cout<<"\n Number of Characters : "<<i;
    cout<<"\n\n";
    return 0;
}
