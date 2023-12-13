#include "cos.h"
#include <limits>

Complex cos(const Complex &) {
  return std::numeric_limits<double>::quiet_NaN();
}