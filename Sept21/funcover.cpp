#include<iostream>
using namespace std;

int sum (int a, int b)
{
    return (a+b);
}

int sum (int a, int b, int c)
{
    return (a+b+c);
}

int sum (int a, int b, int c,int d)
{
    return (a+b+c+d);
}

int sum (int a, int b, int c,int d,int e)
{
    return (a+b+c+d+e);
}

int main()
{
    int n,a[10],i,j=1;

    for(i=0;;i++)
    {

        if(n!=0)
        {
            cout<<"\n Enter Next Number (press 0 to exit) : ";
            cin>>n;
            a[i]=n;
            j++;

        }
        else
        {
            cout<<"\n Inputs Over ";
            break;
        }

    }
    switch(j)
    {
        case 2:
            cout<<"\n SUM IS : ";
            cout<<sum(a[0],a[1]);
            break;
        case 3:
            cout<<"\n SUM IS : ";
            cout<<sum(a[0],a[1],a[2]);
            break;
        case 4:
            cout<<"\n SUM IS : ";
            cout<<sum(a[0],a[1],a[2],a[3]);
            break;
        case 5:
            cout<<"\n SUM IS : ";
            cout<<sum(a[0],a[1],a[2],a[3],a[4]);
            break;
        default:
            cout<<"\n\n EXITING..Bye!! ";
    }
    cout<<"\n\n";
    return 0;
}
