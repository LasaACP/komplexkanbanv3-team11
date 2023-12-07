#include "Complex.h"
#include "exp.h"

Complex exp(const Complex& c1) {
  return Complex(c1.real,c1.img);
}