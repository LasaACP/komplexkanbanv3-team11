#include "Complex.h"
#include "arg.h"
#include <cmath>

double arg(const Complex& c1) {
  double arg = atan(c1.img/c1.real);
  arg = round(arg * 10000)/10000;
  return arg;
}