#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"
#include <vector>
#include <unordered_map>

TEST_CASE( "When computing type_statistics", "[type_statistic]" ) {
    SECTION( "A frequency statistic should be computed" ){
        CHECK ( type_statistic({"temperature"s, "wind"s, "temperature"s, "temperature"s}) == std::unordered_map{{"temperature"s, 3}, {"wind"s, 1}});
    }
    SECTION( "An empty vector should return an empty statistic" ) {
        CHECK ( type_statistic({}) == std::unordered_map{} );
    }
}
