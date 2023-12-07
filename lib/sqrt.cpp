#include "Complex.h"
#include "sqrt.h"

Complex sqrt(const Complex& c1) {
  return Complex(c1.real,c1.img);
}