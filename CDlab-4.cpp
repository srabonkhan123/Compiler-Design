#include <iostream>

int main() {
    // Take input for the number
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Initialize variables
    long long factorial = 1;

    // Calculate factorial using a loop
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Display the result
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}

