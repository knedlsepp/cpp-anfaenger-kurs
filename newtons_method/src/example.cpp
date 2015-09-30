#include "example.hpp"
auto newtons_method(function<double(double)> f, 
               function<double(double)> fprime,
               double initial_value) -> double{
    auto num_it = 20;
    auto x = initial_value;
    for (auto i = 0; i<num_it; ++i){
        x = x - f(x)/fprime(x);
    }


}
