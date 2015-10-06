#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "example.hpp"
TEST_CASE( "When computing get_nearest_larger", "[get_nearest_larger]" ) {
    SECTION( "the nearest larger element should be returned." ) {
        auto f = std::map<double, double>{{5.,3.}, {1.,2.}, {2.,3.},{1.5,0.}};
        auto input = 1.6;
        auto output = std::tuple<double, double>{2.,3.};
        REQUIRE( get_nearest_smaller(f, input) == output );
    }
    SECTION( "the nearest larger element should be returned." ) {
        auto f = std::map<double, double>{{5.,3.}, {1.,2.}, {2.,3.},{1.5,0.}};
        auto input = 2.1;
        auto output = std::tuple<double, double>{5.,3.};
        REQUIRE( get_nearest_smaller(f, input) == output );
    }   
}
