#include "Complex.h"
#include "multi.h"

Complex operator*(const Complex& c1, const Complex& c2) {
  return Complex(c1.real*c2.real,c1.img*c2.img);
}

Complex operator*(const Complex& c1, const double& d) {
  return Complex((c1.real)*d,c1.img);
}

Complex operator*(const double& d,const Complex& c1) {
  return Complex((c1.real)*d,c1.img);
}