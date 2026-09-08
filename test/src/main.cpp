#include <iostream>
#include "Calculator.hpp"

int main() {
    // Instantiate our calculator object from the MathUtils namespace
    MathUtils::Calculator calc;

    std::cout << "--- Production Calculator Simulator ---\n";

    double num1 = 15.5;
    double num2 = 4.5;

    // Call the member functions
    double sum = calc.add(num1, num2);
    double difference = calc.subtract(num1, num2);

    std::cout << num1 << " + " << num2 << " = " << sum << "\n";
    std::cout << num1 << " - " << num2 << " = " << difference << "\n";

    return 0;
}
