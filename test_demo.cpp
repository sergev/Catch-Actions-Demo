//
// Test the fibonacci() function.
//
#include "demo.hpp"
#include "catch.hpp"

//
// Check valid inputs.
//
TEST_CASE("Check valid input", "[fibonacci]")
{
    REQUIRE(fibonacci(0) == 0);
    REQUIRE(fibonacci(1) == 1);
    REQUIRE(fibonacci(2) == 1);
    REQUIRE(fibonacci(3) == 2);
    REQUIRE(fibonacci(4) == 3);
    REQUIRE(fibonacci(5) == 5);
    REQUIRE(fibonacci(20) == 6765);
    REQUIRE(fibonacci(40) == 102334155);
    REQUIRE(fibonacci(47) == 2971215073);
}

//
// Invalid inputs: exception is expected.
//
TEST_CASE( "Check overflow", "[fibonacci]")
{
    REQUIRE_THROWS(fibonacci(100));
}
