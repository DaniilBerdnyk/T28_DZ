#include "Truck.h"

Truck::Truck(std::string b, std::string c, double fTV, double fC, double lC) : Car(b, c, fTV, fC), loadCapacity(lC) {}

void Truck::setLoadCapacity(double lC) { loadCapacity = lC; }
double Truck::getLoadCapacity() { return loadCapacity; }

double Truck::calculateCost(double fuelPrice) {
    return ((fuelConsumption / 100) * fuelPrice) / loadCapacity;
}

Truck::~Truck() {}
