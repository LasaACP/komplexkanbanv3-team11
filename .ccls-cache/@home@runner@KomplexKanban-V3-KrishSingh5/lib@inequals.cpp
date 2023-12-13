#include "Complex.h"
#include "inequals.h"

bool operator!=(const Complex& c1, const Complex& c2) {
  return (c1.real != c2.real) || (c1.img != c2.img);
}