#include "tan.h"
#include <limits>

Complex tan(const Complex &) {
  return std::numeric_limits<double>::quiet_NaN();
}