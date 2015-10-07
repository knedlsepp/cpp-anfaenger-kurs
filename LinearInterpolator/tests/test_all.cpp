#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "example.hpp"
TEST_CASE ( "When doing linear interpolation", "[LinearInterpolator]" ){
    SECTION( "The interpolator object should be created and evaluatable"){
        auto lin = LinearInterpolator{{1.,2.,3.}, {4.,10.,8.}};
        CHECK (lin.interpolate(1.5) == Approx(7.) );
        CHECK (lin.interpolate(2.5) == Approx(9.) );
    }
}

