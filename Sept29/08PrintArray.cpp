#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int i;
    cout<<"\n Enter The Elements in Array : ";
    for(i=0;i<10;i++)
    {
	    cout<<"\n Element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\n Elements in array are : ";
    for(i=0;i<10;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"\n\n";
    return 0;
}
