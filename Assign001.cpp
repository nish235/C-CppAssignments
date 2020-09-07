#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pur,i;
    float wei[10],tot=0.0,avg;
    cout << "Enter the numbers of data: ";
    cin >> pur;
    for(i=0;i<pur;i++)
    {
        cout<<i+1<<". Enter number: ";
        cin>>wei[i];
        tot=tot+wei[i];
    }
    avg=tot/pur;
    cout<<"\n Average = "<<avg<<endl<<endl;
    return 0;
}
