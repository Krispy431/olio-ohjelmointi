#include "car.h"

Car::Car() {
    std::cout << "Car information:" << endl;
}

void Car::printData() {
    std::cout << "Brand: " << brand << "\n" << "Model: " << model << "\n" << "Year: " << yearModel << endl;
}

void Car::setBrand(string brand) {
    this->brand = brand;
}

void Car::setModel(string model) {
    this->model = model;
}

void Car::setYearModel(int yearModel) {
    this->yearModel = yearModel;
}