//
// Calculate factorials.
//
#include <stdexcept>
#include "demo.hpp"

int factorial(int number)
{
    if (number < 0)
        throw std::runtime_error("Negative input");

    if (number <= 1)
        return 1;

    return number * factorial(number-1);
}
