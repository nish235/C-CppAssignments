#include<iostream>
using namespace std;

float moneyRec(int current,float factor=1.05)
{
    return current*factor;
}

int main()
{
    int money=10000;
    cout<<"\n If you have "<<money<<" rs in your bank account, you will receive "<<moneyRec(money)<<" rs after 1 year ";
    cout<<"\n FOR VIP: If you have "<<money<<" rs in your bank account, you will receive "<<moneyRec(money,1.1)<<" rs after 1 year ";
    cout<<"\n\n";
    return 0;
}
