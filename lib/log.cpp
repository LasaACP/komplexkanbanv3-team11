#include "Complex.h"
#include "log.h"
#include <cmath>

Complex log(const Complex& c1) {

  double r = sqrt(c1.real * c1.real + c1.img * c1.img);
  double theta = acos(c1.real / r);

  if (c1.img < 0) {
    theta = -theta;
  }

  double real = log(r);
  double image = theta;

   real = round(real*10000)/10000;
  image = round(image*10000)/10000;
  return Complex(real,image);
}