#include "Complex.h"

    Complex::Complex(){
      img=0;
      real=0;
    }
    Complex::Complex(double r, double i){
      real=r;
      img=i;
    }
  
    Complex::Complex(double r){
    real=r;
    img=0;
    }
    
    std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.img << "i";
        return os;
    }
    
    std::istream& operator>>(std::istream& is, Complex& c) {
        is >> c.real >> c.img;
        return is;
    }