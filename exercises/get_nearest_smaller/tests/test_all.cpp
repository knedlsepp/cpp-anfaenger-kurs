#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "example.hpp"
TEST_CASE( "When computing get_nearest_smaller", "[get_nearest_smaller]" ) {
    SECTION( "the nearest smaller element should be returned." ) {
        auto f = std::map<double, double>{{5.,3.}, {1.,2.}, {2.,3.},{1.5,0.}};
        auto input = 1.6;
        auto output = std::tuple<double, double>{1.5,0.};
        REQUIRE( get_nearest_smaller(f, input) == output );
    }
    SECTION( "the nearest smaller element should be returned." ) {
        auto f = std::map<double, double>{{5.,3.}, {1.,2.}, {2.,3.},{1.5,0.}};
        auto input = 2.;
        auto output = std::tuple<double, double>{1.5,0.};
        REQUIRE( get_nearest_smaller(f, input) == output );
    }   
}
