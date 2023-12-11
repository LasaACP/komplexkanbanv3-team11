#include "Complex.h"
#include "divis.h"

Complex operator/(const Complex& c1, const Complex& c2) {
  double real = ((c1.real*c2.real)+(c1.img + c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
  double image = ((c1.img*c2.real)-(c1.real * c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
  return Complex(real, image);
}

Complex operator/(const Complex& c1, const double& d) {
  return Complex((c1.real)/d,c1.img);
}

Complex operator/(const double& d,const Complex& c1) {
  return Complex((c1.real)/d,c1.img);
}
