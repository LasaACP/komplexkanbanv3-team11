#include "Complex.h"
#include "polar.h"
#include <cmath>

Complex polar(double m, double a) {
  double real = m * cos(a);
  double image = m * sin(a);

  real = round(real * 10000)/10000;
  image = round(image * 10000)/10000;

  return Complex(real, image);
}