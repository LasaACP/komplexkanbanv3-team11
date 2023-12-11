#ifndef COMPLEX_H
#define COMPLEX_H

#include "iostream"

class Complex {
  public:
    double real;
    double img;
    Complex();
    Complex(double r, double i);
    Complex(double r);
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
    friend std::istream& operator>>(std::istream& is, Complex& c);
};

#endif