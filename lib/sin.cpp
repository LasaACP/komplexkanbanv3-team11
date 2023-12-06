#include "Complex.h"
#include "sin.h"

Complex sin(const Complex& c1) {
  return Complex(c1.real,c1.img);
}