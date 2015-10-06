#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "example.hpp"

TEST_CASE( "When using interpolate", "[interpolate]" ) {

    SECTION( "{x,x} should yield the identity map" ) {
        auto f = std::map<double, double>{{0.,0.},{1.,1.},{2.,2}};
        for (auto x = 0.25; x<2; x+=0.25){
            CHECK( interpolate(f, x) == Approx(x) );
        }
    }
    SECTION( "Shuffling shouldn't matter." ) {
        auto f = std::map<double, double>{{2.,2.}, {1.,1.}, {0.,0.}};
        for (auto x = 0.25; x<2; x+=0.25){
            CHECK( interpolate(f, x) == Approx(x) );
        }
    }
    SECTION( "More complicated values should also work." ) {
        auto f = std::map<double, double>{{0., 10.},{1.,12.},{2.,20.}};
        CHECK( interpolate(f, 0.5) == Approx(11) );
        CHECK( interpolate(f, 1.5) == Approx(16) );
        CHECK( interpolate({{0,0}, {1,10}}, 0.5) == Approx(5) );
    }
}
