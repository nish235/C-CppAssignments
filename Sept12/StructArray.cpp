#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[5], i, s, ctr = 0;
    cout<<"\n Enter the Number : ";
    for(i=0;i<5;i++)
    {
       cin>>arr[i];
    }
    cout<<"\n Enter the element for search :"<<endl;
    cin>>s;
    for(i=0;i<5;i++)
    {
        if(arr[i] == s)
        {
            ctr = 1;
            break;

        }
    }
    if(ctr == 1)
    {
        cout<<"\n Element is present";
    }
    else
        cout<<"\n Element not present";
    return 0;
}
