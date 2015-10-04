#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"


TEST_CASE ( "When computing my_exp: ", "[my_exp]"){
    SECTION ( "my_exp(0.) should equal 1") {
        REQUIRE( my_exp(0.) == Approx(1.));
    }
    SECTION ( "my_exp(1.) should equal 2.71828182846") {
        REQUIRE( my_exp(1.) == Approx(2.71828182846));
    }
    SECTION ( "my_exp(10.) should equal 22026.4657948") {
        REQUIRE ( my_exp(10.) == Approx(22026.4657948));
    }
    SECTION ( "my_exp(40.) should equal 2.3538527e+17") {
        REQUIRE (my_exp(40.) == Approx(2.3538527e+17));
    }
    SECTION ( "my_exp(x) should always be positive") {
        auto min = -5e3;
        auto max = 5e3;
        auto num_iterations = 30;
        auto x = min;
        auto dx = (max-min)/num_iterations;
        for (auto i = 0; i<num_iterations; ++i){
            REQUIRE( my_exp(x) >= 0.);
            x += dx;
        }
    }
}
