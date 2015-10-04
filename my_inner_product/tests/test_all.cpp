#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "example.hpp"
#include <vector>

TEST_CASE( "When computing my_inner_product", "[my_inner_product]" ) {
    SECTION( "the inner product should be computed." ) {
        auto v = std::vector<double>{ 2., 2., 2.};
        CHECK ( my_inner_product(v, v) == 12. );
        v = std::vector<double>{ 1., 1., 1., 1.};
        CHECK ( my_inner_product(v, v) == 4. );
    }
    SECTION( "the function should be commutative." ) {
        auto v1 = std::vector<double>{ 1.123, 3.4, 5.23};
        auto v2 = std::vector<double>{ 5.123, 2.3, 1.12};
        CHECK ( my_inner_product(v1, v2) == my_inner_product(v2, v1) );
    }

    SECTION( "the function should be the regular product for scalars." ) {
        auto x = 3.12;
        auto v = std::vector<double>{x};
        CHECK ( my_inner_product(v, v) == x*x);
    }
    
    SECTION( "it should work for temporaries." ) {
        CHECK ( my_sum({1.,2.}, {1.,2.}) == 5. );
    }

    SECTION( "two vectors of different size should throw an exception." ) {
        
        REQUIRE_THROWS( my_inner_product({1., 2.}, {1.}));
        REQUIRE_THROWS( my_inner_product({1.}, {1., 2.}));
    }
}
