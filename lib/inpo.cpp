#include "Complex.h"
#include "inpo.h"

std::ostream& operator<<(std::ostream& os, const Complex& complex) {
  os << "(" << complex.real << "," << complex.img << ")";
  return os;
}

std::istream& operator>>(std::istream& is, Complex& complex) {
  char openParenthesis, comma, closeParenthesis;
  double realPart, imagPart;

  is >> openParenthesis >> realPart >> comma >> imagPart >> closeParenthesis;
    return is;
}