#include "car.h"


//Maybe like this? Not entirely sure what the assignment means with "alustaa kaikki jäsenmuuttujat"
Car::Car(string brand, string model, int yearModel) {
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData() {
    cout << "Brand: " << brand << endl << "Model: " << model << endl << "Year: " << yearModel << endl << endl;
}