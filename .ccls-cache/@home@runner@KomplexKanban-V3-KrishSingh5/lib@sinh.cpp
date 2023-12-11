#include "Complex.h"
#include <cmath>

double isinh(Complex b){
    b.real = sinh(b.real)*cos(b.img);
    b.img = cosh(b.real)*sin(b.img);
}

double rsinh(double x){
    return (exp(x) - exp(-x))/2;
}