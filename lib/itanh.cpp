#include "Complex.h"
#include <cmath>

void itanh(Complex b){
    Complex * c1 = new Complex(sinh(2*b.real),sin(2*b.img));
    b = c1/(cosh(2*b.real)+cos(2*b.img));
}