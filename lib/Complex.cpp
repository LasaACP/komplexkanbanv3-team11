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
    
