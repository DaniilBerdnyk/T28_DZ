#pragma once
#include "Car.h"

class Truck : public Car {
private:
    double loadCapacity;

public:
    Truck(std::string b, std::string c, double fTV, double fC, double lC);
    void setLoadCapacity(double lC);
    double getLoadCapacity();
    double calculateCost(double fuelPrice);
    ~Truck();
};
