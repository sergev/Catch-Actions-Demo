//
// Calculate Fibonacci numbers.
//
#include <stdexcept>
#include "demo.hpp"

static unsigned fib_recursive(unsigned index, unsigned iteration, unsigned prev2, unsigned prev1)
{
    unsigned sum = prev2 + prev1;

    // Check for overflow.
    if (sum < prev1)
        throw std::runtime_error("Fibonacci overflow");

    iteration++;
    if (iteration == index)
        return sum;

    // Use tail recursion.
    return fib_recursive(index, iteration, prev1, sum);
}

unsigned fibonacci(unsigned index)
{
    if (index < 2)
        return index;

    return fib_recursive(index, 1, 0, 1);
}
