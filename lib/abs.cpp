#include "Complex.h"
#include "abs.h"
#include <cmath>

Complex abs(const Complex& c1) {
  double absoluteValue = sqrt(c1.real * c1.real + c1.img * c1.img);
  absoluteValue = round(absoluteValue * 10000)/10000;
  return Complex(absoluteValue,0);

}

double abs(const Complex& c1, int c) {
  double absoluteValue = sqrt(c1.real * c1.real + c1.img * c1.img);
  return absoluteValue;
}