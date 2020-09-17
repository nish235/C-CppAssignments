#include<iostream>
using namespace std;

void create(int z[], int s)
{
   int i;
   for(i=0;i<s-1;i++)
    {
        cout<<z[i]<<"  ";
    }
   cout<<z[i]<<" ";
   cout<<"\n";
}

int main()
{
    int arr;
    int a1[]={10, 20, 30, 40, 50};
    arr=sizeof(a1)/sizeof(a1[0]);
    cout<<"\n Original Array : ";
    create(a1,arr);
    int res[] = {a1[0],a1[arr-1]};
    arr=sizeof(res)/sizeof(res[0]);
    cout<<"\n New Array : ";
    create(res,arr);
    cout<<"\n\n";
    return 0;
}

