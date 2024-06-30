#include <iostream>
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
   
    Car car("Toyota", "Red", 50, 7);
    cout << "Car Brand: " << car.getBrand() << endl;
    cout << "Car Color: " << car.getColor() << endl;
    cout << "Car Fuel Tank Volume: " << car.getFuelTankVolume() << endl;
    cout << "Car Fuel Consumption: " << car.getFuelConsumption() << endl;
    cout << "Car can travel: " << car.calculateDistance() << " km on a full tank.\n" << endl;

   
    Truck truck("Volvo", "White", 300, 30, 20);
    cout << "Truck Brand: " << truck.getBrand() << endl;
    cout << "Truck Color: " << truck.getColor() << endl;
    cout << "Truck Fuel Tank Volume: " << truck.getFuelTankVolume() << endl;
    cout << "Truck Fuel Consumption: " << truck.getFuelConsumption() << endl;
    cout << "Truck Load Capacity: " << truck.getLoadCapacity() << " tons" << endl;
    cout << "Cost of transporting 1 ton of cargo for 1 km: " << truck.calculateCost(2) << " currency units.\n" << endl;

    return 0;
}


