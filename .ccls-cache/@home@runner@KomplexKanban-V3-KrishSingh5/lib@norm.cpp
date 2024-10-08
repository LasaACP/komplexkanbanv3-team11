#include "Complex.h"
#include "norm.h"
#include <cmath>

Complex norm(const Complex& c1) {
  double norm = (pow(c1.real,2) + pow(c1.img,2));
  norm = round(norm * 10000)/10000;
  return Complex(norm,0);
}