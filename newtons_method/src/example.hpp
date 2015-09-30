double newtons_method(std::function<double(double)> f,
                      std::function<double(double)> fprime,
                      double initial_value);
