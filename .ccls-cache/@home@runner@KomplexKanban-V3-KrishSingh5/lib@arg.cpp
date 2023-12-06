#include "Complex.h"
#include "arg.h"

Complex arg(const Complex& c1) {
  return Complex(c1.real,c1.img);
}