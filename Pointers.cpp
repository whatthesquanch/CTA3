#include <iostream>

int main() {
    // Ask the user to enter three integer values
    std::cout << "Enter three integer values:\n";

    // Store the values into three different variables
    int a, b, c;
    std::cin >> a >> b >> c;

    // Create integer pointers to dynamic memory
    int *ptrA = new int(a);
    int *ptrB = new int(b);
    int *ptrC = new int(c);

    // Display integer pointers to dynamic memory
    std::cout << "Contents of variables:\n";
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << "Contents of pointers:\n";
    std::cout << "*ptrA: " << *ptrA << std::endl;
    std::cout << "*ptrB: " << *ptrB << std::endl;
    std::cout << "*ptrC: " << *ptrC << std::endl;

    // Ftee dynamically allocated memory
    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}