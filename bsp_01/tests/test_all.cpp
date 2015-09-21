#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "factorial.h"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    CHECK( factorial(1) == 1 );
    CHECK( factorial(2) == 2 );
    CHECK( factorial(3) == 6 );
    CHECK( factorial(10) == 3628800 );
}
