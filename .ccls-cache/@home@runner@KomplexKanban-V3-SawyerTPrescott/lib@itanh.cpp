#include "Complex.h"
#include <cmath>
#include "divis.cpp"

Complex itanh(const Complex b){
    Complex * c1 = new Complex(sinh(2*b.real),sin(2*b.img));
    c1->real = c1->real/(cosh(2*b.real)+cos(2*b.img));
    c1->img = c1->img/(cosh(2*b.real)+cos(2*b.img));
    return *c1;
}