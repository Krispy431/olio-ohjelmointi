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
    //Check that a can be divided by b (b != 0)
    if(b == 0) {
        throw std::runtime_error("Cannot divide by 0!");
    } else {
        //Calculate quotient
        int quotient = a / b;
        //Print quotient
        std::cout<<"Quotient: " << quotient << "\n"; }
}

int retSum(int a, int b) {
    //Calculate sum
    int sum = a+b;

    //Return the operation
    return sum;
}

int retDiv(int a, int b) {
    //Check that a can be divided by b (b != 0)
    if (b==0) {
        throw std::runtime_error("Cannot divide by 0!");
    } else {
        //Calculate quotient
        int quotient = a / b;
        //Return the operation
        return quotient;
    }
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

    /*First part: Everything in main()
     * //Calculate sum and quotient
     * int sum = a+b;
     * int quotient = a/b;
     *
     * //Print
     * std::cout << "Sum: " << sum << "\n";
     * std::cout << "Quotient: " << quotient << "\n";
     * */

    /*Second part: use calcSum and calcDiv to print sum and quotient
    calcSum(a,b);
    calcDiv(a,b);
    */

    //Third part: Use retSum and retDiv
    //Print sum
    sum = retSum(a,b);
    std::cout << a << "+" << b << "=" << sum << "\n";
    //Try-catch to check that maths is correct (b != 0)
    try {
        quotient = retDiv(a,b);
        std::cout << a << "/" << b << "=" << quotient << "\n";
    } catch (std::runtime_error& e) {
        std::cout<<"Error: " << e.what() << "\n";
    }

    return 0;
}
