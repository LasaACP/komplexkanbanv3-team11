#include "Complex.h"
#include <cmath>

Complex sinh(const Complex z) {
    Complex * z1 = new Complex(sinh(z.real)*cos(z.img), cosh(z.real)*sin(z.img));
    return *z1;
}