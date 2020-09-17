#include<iostream>
using namespace std;

void middle(int z[], int s)
{
   int i;
   for(i=0;i<s-1;i++)
    {
        cout<<z[i]<<"  ";
    }
   cout<<z[i]<<"  ";
   cout<<"\n";
}

int main()
{
    int arr;
    int a1[] = {10, 20, 30, 40, 50 };
    int a2[] = {60, 70, 80, 90, 99 };
    int arr1 = sizeof(a1)/sizeof(a1[0]);
    int arr2 = sizeof(a2)/sizeof(a2[0]);
    cout<<"\n Original Array : \n";
    middle(a1, arr1);
    middle(a2, arr2);
    int res[] = { a1[2], a2[2]  };
    arr = sizeof(res)/sizeof(res[0]);
    cout<<"\n New Array : ";
    middle(res, arr);
    cout<<"\n\n";
    return 0;
}
