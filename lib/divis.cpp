#include "Complex.h"
#include "divis.h"
#include <cmath>

Complex operator/(const Complex& c1, const Complex& c2) {
  double real = (c1.real * c2.real + c1.img * c2.img) / (c2.real * c2.real + c2.img * c2.img);

  double image = (c1.img * c2.real - c1.real * c2.img) / (c2.real * c2.real + c2.img * c2.img);

  real = round(real * 10000)/10000;
  image = round(image * 10000)/10000;
  
  return Complex(real, image);
}

Complex operator/(const Complex& c1, const double& d) {
  return Complex((c1.real)/d,c1.img);
}

Complex operator/(const double& d,const Complex& c1) {
  return Complex((c1.real)/d,c1.img);
}
