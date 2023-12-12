
#include "Complex.h"
#include "exp.h"
#include <cmath>

Complex exp(const Complex& c1) {
    const double e = 2.7182818284590452353602874713527;
    double real = round((pow(e,c1.real) * cos(c1.img))*10000)/10000;
  double image = round((pow(e,c1.real) * sin(c1.img))*10000)/10000;
    return Complex(real,image);
}