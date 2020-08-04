//
// Test the fibonacci() function.
//
#include "demo.hpp"
#include "catch/catch.hpp"

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
    REQUIRE(fibonacci(10) == 55);
    REQUIRE(fibonacci(20) == 6765);
    REQUIRE(fibonacci(30) == 832040);
    REQUIRE(fibonacci(40) == 102334155);
    REQUIRE(fibonacci(50) == 12586269025);
    REQUIRE(fibonacci(60) == 1548008755920);
    REQUIRE(fibonacci(70) == 190392490709135);
    REQUIRE(fibonacci(80) == 23416728348467685);
    REQUIRE(fibonacci(90) == 2880067194370816120);
    REQUIRE(fibonacci(93) == 12200160415121876738UL);
}

//
// Check exception on overflow.
//
TEST_CASE( "Check overflow", "[fibonacci]")
{
    REQUIRE_THROWS(fibonacci(100));
}
