#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"\n\t SAMPLE OUTPUT : ";
    cout<<"\n\t ----------------------------";
    cout<<"\n\t x\t x+2\t x+4\t x+6 \n\n";
    for(i=1;i<=15;i+=3)
    {
        cout<<"\t "<<i<<"\t "<<i+2<<"\t "<<i+4<<"\t "<<i+6<<"\n";
    }
    cout<<"\n\n";
    return 0;
}

