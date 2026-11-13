
/**
 * @file calculator.cpp
 * @brief A simple calculator demonstrating Doxygen documentation.
 * @author Vedant Todkar
 * @version 1.0
 */

#include <iostream>

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Subtracts two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Difference between the integers.
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * @brief Main function of the calculator.
 * @return 0 when execution is successful.
 */
int main() {
    int x = 10;
    int y = 5;

    std::cout << "Addition: " << add(x, y) << '\n';
    std::cout << "Subtraction: " << subtract(x, y) << '\n';

    return 0;
}
