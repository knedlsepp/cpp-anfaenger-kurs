#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"
#include <vector>
#include <unordered_map>

TEST_CASE( "When computing type_statistics", "[type_statistic]" ) {
    using statistic = std::unordered_map<std::string, unsigned int>;
    using namespace std::string_literals;
    
    SECTION( "A frequency statistic should be computed." ){
        auto result = type_statistic({"temperature"s, "wind"s, "temperature"s, "temperature"s});
        auto expected_result = statistic{{"temperature"s, 3}, {"wind"s, 1}};
        CHECK ( result ==  expected_result );
    }
    SECTION( "An empty vector should return an empty statistic." ) {
        CHECK ( type_statistic({}) == statistic{} );
    }
}
