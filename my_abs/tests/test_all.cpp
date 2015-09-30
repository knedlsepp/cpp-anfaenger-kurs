#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"
#include <vector>

TEST_CASE( "When computing my_absolute values", "[my_abs]" ) {

    SECTION( "Negative numbers become positive" ) {
        REQUIRE( my_abs(-3) == 3 );
        REQUIRE( my_abs(-1e3) == 1e3 );
        REQUIRE( my_abs(-4e-100) == 4e-100 );
    }
    SECTION( "Positive numbers stay positive" ) {
        REQUIRE( my_abs(3) == 3 );
        REQUIRE( my_abs(1e3) == 1e3 );
        REQUIRE( my_abs(4e-100) == 4e-100 );
    }

    SECTION( "Infinites become +Inf" ) {
        REQUIRE( my_abs(-std::numeric_limits<double>::infinity()) == std::numeric_limits<double>::infinity() );
        REQUIRE( my_abs( std::numeric_limits<double>::infinity()) == std::numeric_limits<double>::infinity() );
    }

    SECTION( "NaN stays NaN" ) {
        auto isnan = [](auto x){return x!=x;};
        REQUIRE( isnan(my_abs(std::numeric_limits<double>::quiet_NaN())) );
    }
}
