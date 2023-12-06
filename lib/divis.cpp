#include "Complex.h"
#include "divis.h"

Complex operator/(const Complex& c1, const Complex& c2) {
  return Complex(c1.real/c2.real,c2.img/c2.img);
}
