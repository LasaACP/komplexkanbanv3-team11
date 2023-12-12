#include "Complex.h"
#include "sin.h"
#include <cmath>

Complex sin(const Complex& c1) {
  double real = round((sin(c1.real) * cosh(c1.img))*10000)/10000;
  double image = round((cos(c1.real) * sinh(c1.img))*10000)/10000;
  return Complex(real,image);
}