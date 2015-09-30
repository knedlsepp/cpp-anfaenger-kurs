#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "example.hpp"
#include <cmath>


TEST_CASE ( "When using newtons_method", "newtons_method"){
    SECTION ( "sin should have a root at zero") {
        REQUIRE( newtons_method(sin, cos, 0.1) == Approx(0));
    }
    SECTION ( "sin should also have a root at pi") {
        REQUIRE( newtons_method(sin, cos, 3.12) == Approx(M_PI));
    }
    SECTION ("The method should be exact to at least 6 decimal places"){
        REQUIRE( newtons_method(sin, cos, 3.12) == Approx(M_PI).epsilon(1e-6));
    }
    SECTION ("lambdas should be accepted as arguments"){
        REQUIRE( newtons_method([](double x){return x*x;},
                                [](double x){return 2*x;},
                                0.1) == Approx(0));
    }
}
