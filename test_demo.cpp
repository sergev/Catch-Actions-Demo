//
// Test the factorial() function.
//
#include "demo.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

//
// Check valid inputs.
//
TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}

//
// Invalid input: exception is expected.
//
TEST_CASE( "Factorial of negative", "[factorial]")
{
    REQUIRE_THROWS(factorial(-1));
}
