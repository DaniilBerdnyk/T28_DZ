#include "Car.h"

Car::Car(std::string b, std::string c, double fTV, double fC) : brand(b), color(c), fuelTankVolume(fTV), fuelConsumption(fC) {}

void Car::setBrand(std::string b) { brand = b; }
void Car::setColor(std::string c) { color = c; }
void Car::setFuelTankVolume(double fTV) { fuelTankVolume = fTV; }
void Car::setFuelConsumption(double fC) { fuelConsumption = fC; }

std::string Car::getBrand() { return brand; }
std::string Car::getColor() { return color; }
double Car::getFuelTankVolume() { return fuelTankVolume; }
double Car::getFuelConsumption() { return fuelConsumption; }

double Car::calculateDistance() {
    return (fuelTankVolume / fuelConsumption) * 100;
}
