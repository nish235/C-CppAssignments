#include<iostream>
using namespace std;

 class Vehicle
 {
 public:
    int f,c,b;
    void fuelAmount()
    {
        cout<<"\n Enter The Amount Of Fuel Required : ";
        cin>>f;
    }
    void capacity()
    {
        cout<<"\n Enter The Load Capacity Of Vehicle : ";
        cin>>c;
    }
    void applyBrakes()
    {
        cout<<"\n Enter If Brakes are ok (0/1) : ";
        cin>>b;
    }
    void dispfuel()
    {
        cout<<"\n Amount Of Fuel Entered in Vehicle : "<<f;
    }
    void dispcap()
    {
        cout<<"\n Load Capacity Of Vehicle : "<<c;
    }
    void dispbrakes()
    {
        if(b==1)
        {
            cout<<"\n Brakes are In Good Condition ";
        }
        else if(b==0)
        {
            cout<<"\n Brakes Are Not in Good Condition ";
            cout<<"\n Change The Brakes If Possible ";
        }
        else
        {
            cout<<"\n Invalid Entry ";
        }
    }
 };

 class Bus : public Vehicle
 {
 public:
 };

 class Car : public Vehicle
 {
 public:
 };

 class Truck : public Vehicle
 {
 public:
 };

 int main()
 {
     Bus bs;
     cout<<"\n\n DATA FOR BUS "<<endl;
     bs.fuelAmount();
     bs.capacity();
     bs.applyBrakes();
     bs.dispfuel();
     bs.dispcap();
     bs.dispbrakes();

     Car cr;
     cout<<"\n\n DATA FOR CAR "<<endl;
     cr.fuelAmount();
     cr.capacity();
     cr.applyBrakes();
     cr.dispfuel();
     cr.dispcap();
     cr.dispbrakes();

     Truck tr;
     cout<<"\n\n DATA FOR TRUCK "<<endl;
     tr.fuelAmount();
     tr.capacity();
     tr.applyBrakes();
     tr.dispfuel();
     tr.dispcap();
     tr.dispbrakes();

     cout<<"\n\n";
     return 0;
 }
