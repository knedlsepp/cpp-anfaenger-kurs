#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include <map>
#include "example.hpp"

TEST_CASE( "When converting vectors to a map", "[convert_vectors_to_map]" ) {
    SECTION( "empty vectors yield the empty map." ) {
        auto emptymap = std::map<double,double>{};
        REQUIRE( convert_vectors_to_map({},{}) == emptymap );
    }
    SECTION( "Tuples should be matched." ) {
        auto xs = std::vector<double>{3., 1., 5., 7.};
        auto ys = std::vector<double>{1., 2., 3., 4.};
        auto m = std::map<double, double>{{3.,1.}, {1.,2.}, {5.,3.}, {7.,4.}};
        REQUIRE( convert_vectors_to_map(xs,ys) == m );
    }
}
