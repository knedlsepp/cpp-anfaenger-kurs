#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"


TEST_CASE ( "When computing exp: ", "[exp]"){
    SECTION ( "exp(0.) should equal 1") {
        REQUIRE( exp(0.) == Approx(1.));
    }
    SECTION ( "exp(1.) should equal 2.71828182846") {
        REQUIRE( exp(0.) == Approx(2.71828182846));
    }
    SECTION ( "exp(10.) should equal 22026.4657948") {
        REQUIRE ( exp(10.) == Approx(22026.4657948));
    }
    SECTION ( "exp(40.) should equal 2.3538527e+17") {
        REQUIRE (exp(40.) == Approx(2.3538527e+17));
    }
    SECTION ( "exp(x) should always be positive") {
        auto min = -5e3;
        auto max = 5e3;
        auto num_iterations = 30;
        auto x = min;
        auto dx = (max-min)/num_iterations;
        for (auto i = 0; i<num_iterations; ++i){
            REQUIRE( exp(x) >= 0.);
            x += dx;
        }
    }
}
