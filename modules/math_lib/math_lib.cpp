# include "math_lib.hpp"

namespace math_lib {
    double add (float& n1, float& n2)
    {
        return n1 + n2;
    }
    double divide (float& n1, float& n2)
    {
        if (n2 == 0.0)
            return 0.0;
        return n1 / n2;
    }
    double square(double& x)
    {
        return x * x;
    }
}