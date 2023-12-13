#include "root.h"
#include <limits>

Complex root(double d, const Complex &) {
  return std::numeric_limits<double>::quiet_NaN();
}

Complex root(const Complex &, double d) {
  return std::numeric_limits<double>::quiet_NaN();
}

Complex root(const Complex &, const Complex &) {
  return std::numeric_limits<double>::quiet_NaN();
}