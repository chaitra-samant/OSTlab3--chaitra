#include <iostream>

// Function to calculate factorial iteratively
unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    // Ask user for input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate factorial using iterative method
        unsigned long long result = factorialIterative(number);
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    }

    return 0;
}
