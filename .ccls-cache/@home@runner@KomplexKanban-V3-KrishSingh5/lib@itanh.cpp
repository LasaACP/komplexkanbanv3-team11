#include "Complex.h"
#include <cmath>
#include "itanh.h"
#include "divis.h"
#include "icosh.h"
#include "isinh.h"

Complex itanh(const Complex b){
    Complex v = isinh(b,1)/icosh(b,1);
    double real = (v.real * 10000)/10000;
    double image = (v.img * 10000)/10000;
    return Complex(real,image);
}