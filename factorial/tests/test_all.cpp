#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"


TEST_CASE ( "When computing factorials, the following equalities hold", "[factorial]"){
    CHECK( factorial(1) == 1 );
    CHECK( factorial(2) == 2 );
    CHECK( factorial(3) == 6 );
    CHECK( factorial(10) == 3628800 );
    CHECK( factorial(13) == 6227020800ULL );
    CHECK( factorial(14) == 87178291200ULL );
}
