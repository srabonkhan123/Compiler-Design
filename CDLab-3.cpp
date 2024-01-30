#include <iostream>
#include <string>

int main() {
    // Take two strings as first and last name
    std::string firstName, lastName;

    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // Concatenate the two strings to get the full name
    std::string fullName = firstName + " " + lastName;

    // Display the full name
    std::cout << "Full name: " << fullName << std::endl;

    return 0;
}

