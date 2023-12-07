#include "Complex.h"
#include "conj.h"

Complex conj(const Complex& c1) {
  return Complex(c1.real,-c1.img);
}