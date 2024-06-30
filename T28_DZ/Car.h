#pragma once
#include <string>

class Car {
protected:
    std::string brand;
    std::string color;
    double fuelTankVolume;
    double fuelConsumption;

public:
    Car(std::string b, std::string c, double fTV, double fC);
    void setBrand(std::string b);
    void setColor(std::string c);
    void setFuelTankVolume(double fTV);
    void setFuelConsumption(double fC);
    std::string getBrand();
    std::string getColor();
    double getFuelTankVolume();
    double getFuelConsumption();
    double calculateDistance();
};
