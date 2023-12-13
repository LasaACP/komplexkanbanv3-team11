#include "Complex.h"
#include <cmath>
#include "icosh.h"

Complex icosh(const Complex b){
  double real = round((cosh(b.real)*cos(b.img)) * 10000) /10000;
  double image = round((sinh(b.real)*sin(b.img)) * 10000) /10000;
  return Complex(real,image);
}

Complex icosh(const Complex b, int i){
  double real = (cosh(b.real)*cos(b.img)) ;
  double image = (sinh(b.real)*sin(b.img));
  return Complex(real,image);
}