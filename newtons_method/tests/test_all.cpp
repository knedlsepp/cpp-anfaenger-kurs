#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "example.hpp"
#include <cmath>


TEST_CASE ( "newtons_method computes roots of double valued functions", "newtons_method"){

    SECTION ( "sin has root at zero") {
        REQUIRE( newtons_method(sin, cos, 0.1) == Approx(0);
    }
    SECTION ( "sin has root at pi") {

        REQUIRE( newtons_method(sin, cos, 3.12) == Approx(M_PI));
    } 
    SECTION ("newtons_method should be exact to 4 decimal places"){
        REQUIRE( newtons_method(sin, cos, 3.12) == Approx(M_PI).epsilon(1e-4);
    }
    SECTION ("newtons_method should work for lambdas"){
        REQUIRE( newtons_method([](double x){return x*x;},
                                [](double x){return 2*x;},
                                0.1) == Approx(0);
    }
}
