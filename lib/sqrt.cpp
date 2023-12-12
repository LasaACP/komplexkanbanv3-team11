#include "Complex.h"
#include "sqrt.h"
#include "abs.h"
#include <cmath>

Complex sqrt(const Complex& c1) {

  double real = sqrt((abs(c1,1) + c1.real)/2);
  double image = (c1.img >= 0) ? sqrt((abs(c1,1)-c1.real) /2) : -sqrt((abs(c1).real - c1.real) / 2);

  real = round(real * 10000)/10000;
  image = round(image * 10000)/10000;

  return Complex(real, image);
}