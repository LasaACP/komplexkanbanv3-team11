#include <iostream>
#include "Complex.h" 

std::ostream& operator<<(std::ostream& os, const Complex& complex);
std::istream& operator>>(std::istream& is, Complex& complex);