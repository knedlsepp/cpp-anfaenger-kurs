#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>

TEST_CASE( "When computing absolute values", "[abs]" ) {

    SECTION( "Negative numbers become positive" ) {
        REQUIRE( abs(-3) == 3 );
        REQUIRE( abs(-1e3) == 1e3 );
        REQUIRE( abs(-4e-100) == 4e-100 );
    }
    SECTION( "Positive numbers stay positive" ) {
        REQUIRE( abs(3) == 3 );
        REQUIRE( abs(1e3) == 1e3 );
        REQUIRE( abs(4e-100) == 4e-100 );
    }

    SECTION( "Infinites become +Inf" ) {
        REQUIRE( abs(-std::numeric_limits<double>::infinity()) == std::numeric_limits<double>::infinity() );
        REQUIRE( abs( std::numeric_limits<double>::infinity()) == std::numeric_limits<double>::infinity() );
    }

    SECTION( "NaN stays NaN" ) {
        auto isnan = [](auto x){return x!=x;};
        REQUIRE( isnan(abs(std::numeric_limits<double>::quiet_NaN())) );
    }
}
