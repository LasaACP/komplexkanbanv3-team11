#include "Complex.h"
#include "abs.h"
#include <cmath>

Complex abs(const Complex& c1) {
  double absoluteValue = sqrt(c1.real * c1.real + c1.img * c1.img);
  return Complex(absoluteValue,0);
}