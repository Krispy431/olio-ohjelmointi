#include <iostream>

//Function that takes two integers, sums them, and prints the sum, but does not return anything
void calcSum(int a, int b) {
    //Calculate sum
    int sum = a+b;

    //Print sum
    std::cout<<"Sum: " << sum << "\n";
}

//Function that takes two integers, divides them, and prints the quotient, but does not return anything
void calcDiv(int a, int b) {
    //Calculate quotient
    int quotient = a/b;

    //Print quotient
    std::cout<<"Quotient: " << quotient << "\n";
}

int main()
{
    //Define variables
    int a;
    int b;
    int sum;
    int quotient;

    //Ask the user to input two numbers
    std::cout<<"Input the first number: ";
    std::cin>>a;
    std::cout<<"Input the second number: ";
    std::cin>>b;

    sum = a * b;
    quotient = a / b;

    std::cout<<"Sum: "<< sum << "\n";
    std::cout<<"Quotient: "<< quotient << "\n";
    return 0;
}
