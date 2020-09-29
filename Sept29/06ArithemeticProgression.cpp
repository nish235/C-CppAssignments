#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n1,df,n2,i,ln;
    int s1=0;
    cout<<"\n Enter Starting Number : ";
    cin>>n1;

    cout<<"\n Enter The Number Of Terms : ";
    cin>>n2;

    cout<<"\n Enter Common Difference : ";
    cin>>df;

    s1=(n2*(2*n1+(n2-1)*df))/2;
    ln=n1+(n2-1)*df;
    cout<<"\n The Sum of the  A.P. series are : \n";

    for(i=n1;i<=ln;i=i+df)
    {
        if(i!=ln)
        {
            cout<<" "<<i<<" + ";
        }
        else
        {
            cout<<" "<<i<<" = "<<s1;
        }
    }
    cout<<"\n\n";
    return 0;
}
