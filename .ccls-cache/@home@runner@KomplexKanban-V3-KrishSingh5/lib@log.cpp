#include "Complex.h"
#include "log.h"

Complex log(const Complex& c1) {
  return Complex(c1.real,c1.img);
}