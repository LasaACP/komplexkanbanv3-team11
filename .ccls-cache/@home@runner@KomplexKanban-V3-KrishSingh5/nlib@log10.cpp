#include "log10.h"
#include <limits>

Complex log10(const Complex &) {
  return std::numeric_limits<double>::quiet_NaN();
}