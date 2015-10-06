#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"
#include <vector>

TEST_CASE( "Summing vectors", "[vector]" ) {
    SECTION( "my_sum should return the sum." ) {
        auto v = std::vector<double>{ 3., 3., 3.};
        CHECK ( my_sum(v) == 9. );
        v = std::vector<double>{2., 3., 3.};
        CHECK ( my_sum(v) == 8. );
    }
    SECTION( "An empty sum should be zero." ) {
        auto v = std::vector<double>{};
        CHECK ( my_sum(v) == 0. );
    }
    SECTION( "my_sum should work for temporaries." ) {
        CHECK ( my_sum(std::vector<double>{1.,2.}) == 3. );
    }
}
