#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"
#include <cmath>

TEST_CASE ( "When computing my_log: ", "[my_log]"){
    SECTION ( "my_log(0.) should equal 1") {
        REQUIRE( my_log(1.) == Approx(0.) );
    }
    SECTION ( "my_log(2.71828182846) should equal 1") {
        REQUIRE( my_log(2.71828182846) == Approx(1.) );
    }
    SECTION ( "my_log(my_exp(x)) should be the identity") {
        auto min = -5e3;
        auto max = 5e3;
        auto num_iterations = 30;
        auto x = min;
        auto dx = (max-min)/num_iterations;
        for (auto i = 0; i<num_iterations; ++i){
            REQUIRE( my_log(exp(x)) == Approx(0.));
            x += dx;
        }
    }
 }
