#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
     public:
     string brand;
     string model;
     int year;
     Vehicle(string brand, string model, int year)
     {
          this->brand=brand;
          this->model=model;
          this->year=year;
     }
};

class Car: public Vehicle
{
     public:
     string type;
     int seatcap;
     int range;
     Car(string b, string m, int y, string type, int seatcap, int range): Vehicle(b,m,y)
     {
          this->type=type;
          this->seatcap=seatcap;
          this->range=range;
     }
     void showcar()
     {
          cout << "Brand: " << brand << endl
               << "Model: " << model << endl
               << "Year: " << year << endl
               << "Type: " << type << endl
               <<"Seat Capacity: " << seatcap << endl
               << "Range: " << range << " cc" << endl << endl;
     }
};

class Truck: public Vehicle
{
     public:
     string type;
     int payload;
     int range;
     Truck(string b, string m, int y, string type, int payload, int range): Vehicle(b,m,y)
     {
          this->type=type;
          this->payload=payload;
          this->range=range;
     }
     void showtruck()
     {
          cout << "Brand: " << brand << endl
               << "Model: " << model << endl
               << "Year: " << year << endl
               << "Type: " << type << endl
               << "Pay Load: " << payload << " Ton" << endl
               << "Range: " << range << " cc" << endl << endl;
     }
};

class ElectricCar: public Car
{
     public:
     ElectricCar(string b, string m, int y, string t, int s, int r): Car(b,m,y,t,s,r){}
     void showelectcar()
     {
          cout << "Brand: " << brand << endl
               << "Model: " << model << endl
               << "Year: " << year << endl
               << "Type: " << type << endl
               <<"Seat Capacity: " << seatcap << endl
               << "Range: " << range << " cc" << endl << endl;
     }
};

class SemiTruck: public Truck
{
     public:
     SemiTruck(string b, string m, int y, string t, int p, int r): Truck(b,m,y,t,p,r){}
     void showsemtruck()
     {
           cout << "Brand: " << brand << endl
               << "Model: " << model << endl
               << "Year: " << year << endl
               << "Type: " << type << endl
               << "Pay Load: " << payload << " Ton" << endl
               << "Range: " << range << " cc" << endl;
     }
};


int main()
{
     Car Toyota("Toyota", "Axio", 2022, "Sedan", 5, 1500);
     Toyota.showcar();

     Truck Volvo("Volvo", "Large", 2022, "Truck", 5, 3000);
     Volvo.showtruck();

     ElectricCar Tesla("Tesla", "Model S", 2023, "Electric Sedan", 5, 600);
     Tesla.showelectcar();

     SemiTruck Marcesedes("Marcesedes", "Semi", 2024, "Semi Truck", 2, 2000);
     Marcesedes.showsemtruck();

     return 0;
}