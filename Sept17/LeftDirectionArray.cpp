#include<iostream>
using namespace std;

void leftshift(int z[], int s)
  {
   int i;
   for(i=0;i<s-1;i++)
    {
        cout<<z[i]<<" , ";
    }
   cout<<z[i]<<" , ";
   cout<<"\n";
  }

int main()
{
    int a;
    int a1[4];
    cout<<"\n Enter Array : \n";
    for(int i=0;i<4;i++)
    {
        cin>>a1[i];
    }
    a = sizeof(a1)/sizeof(a1[0]);
    cout<<"\n Original Array : ";
    leftshift(a1, a);
    int res[] = { a1[1], a1[2], a1[3], a1[0] };
    a = sizeof(res)/sizeof(res[0]);
    cout<<"\n New Array : ";
    leftshift(res, a);
    cout<<"\n\n";
    return 0;
}

