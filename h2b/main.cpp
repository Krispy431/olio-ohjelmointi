#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    //Create vector
    vector<Car> carList;

    //Create objects to the list
    carList.emplace_back("Skoda", "Octavia", 2021);
    carList.emplace_back("Ford", "Mondeo", 1997);
    carList.emplace_back("Tesla", "Model C", 2025);

    //Print the second entry in the list
    cout << "Printing the second entry in carList..." << endl;
    carList[1].printData();

    //Print the entire list
    cout<< "Printing all the cars in the list..." << endl;
    for (Car car: carList) {
        car.printData();
    }
    return 0;
}
