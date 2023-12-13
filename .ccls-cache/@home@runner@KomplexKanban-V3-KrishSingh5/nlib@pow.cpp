#include "pow.h"
#include <limits>

Complex pow(double d, const Complex &) {
  return std::numeric_limits<double>::quiet_NaN();
}

Complex pow(const Complex &, double d) {
  return std::numeric_limits<double>::quiet_NaN();
}

Complex pow(const Complex &, const Complex &) {
  return std::numeric_limits<double>::quiet_NaN();
}