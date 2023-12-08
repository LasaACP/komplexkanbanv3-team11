#include "Complex.h"
#include <cmath>
#include "icosh.h"

Complex icosh(const Complex b){
    Complex  * c = new Complex(cosh(b.real)*cos(b.img),sinh(b.real)*sin(b.img));
    return *c;
}