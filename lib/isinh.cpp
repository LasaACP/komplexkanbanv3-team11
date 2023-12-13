#include "Complex.h"
#include <cmath>
#include "isinh.h"

Complex isinh(const Complex z) {
    double real = sinh(z.real)*cos(z.img);
    double image = cosh(z.real)*sin(z.img);


  real = round(real * 10000)/10000;
  image = round(image * 10000)/10000;

  return Complex(real,image);
}

Complex isinh(const Complex z, int i) {
    double real = sinh(z.real)*cos(z.img);
    double image = cosh(z.real)*sin(z.img);

  return Complex(real,image);
}