#include "Complex.h"
#include <cmath>

void icosh(Complex b){
    b.real = cosh(b.real)*cos(b.img);
    b.img = sinh(b.real)*sin(b.img);
}