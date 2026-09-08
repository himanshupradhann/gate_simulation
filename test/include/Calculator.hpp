#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

namespace MathUtils {

/**
 * @brief A simple production-grade class handling basic arithmetic operation
 *
 **/
class Calculator {
public:
    Calculator() = default;

    // Methods declarations
    [[nodiscard]] double add(double a, double b) const noexcept;
    [[nodiscard]] double subtract(double a, double b) const noexcept;
};

}

#endif
