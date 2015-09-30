auto my_exp(double x){
    auto nmax = 100;
    auto xdivn = 1.;
    auto sum = 0.;
    for(auto i = 1; i < nmax; ++i){
        sum += xdivn;
        xdivn *= x/i;
    }
    return sum;
}
