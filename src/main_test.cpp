/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../tests/catch_amalgamated.hpp"
#include "../lib/Complex.h"
#include "../lib/addition.h"
#include "../lib/equals.h"
#include "../lib/multi.h"
#include "../lib/divis.h"
#include "../lib/abs.h"
#include "../lib/conj.h"
#include "../lib/norm.h"
#include "../lib/sqrt.h"
#include "../lib/exp.h"
#include "../lib/arg.h"
#include "../lib/log.h"
#include "../lib/sin.h"
#include "../lib/isinh.h"
#include "../lib/icosh.h"
#include "../lib/itanh.h"
#include "../lib/im.h"
#include "../lib/sub.h"
#include "../lib/inpo.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main_test( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Addition Test", "[Add]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Addition" << endl;
  double d = 3;
  REQUIRE(Complex(1,2)+Complex(2,3) == Complex(3,5));
  REQUIRE(Complex(1,-2)+Complex(1,2) == Complex(2,0));
  REQUIRE(Complex(1,2)+Complex(-2,3) == Complex(-1,5));
  REQUIRE(Complex(5,0)+Complex(0,2) == Complex(5,2));
  REQUIRE(Complex(1,0)+Complex(1,0) == Complex(2,0));
  REQUIRE(Complex(1,0)+(d) == Complex(4,0));
}

TEST_CASE("Subtraction Test", "[Sub]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Subtraction" << endl;
  double d = 3;
  REQUIRE(Complex(1,2)-Complex(2,3) == Complex(-1,-1));
  REQUIRE(Complex(1,-2)-Complex(1,2) == Complex(0,-4));
  REQUIRE(Complex(1,2)-Complex(-2,3) == Complex(3,-1));
  REQUIRE(Complex(5,0)-Complex(0,2) == Complex(5,-2));
  REQUIRE(Complex(1,0)-Complex(1,0) == Complex(0,0));
  REQUIRE(Complex(1,1)-(d) == Complex(-2,1));
}

TEST_CASE("Multiplication Test", "[Multi]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Multiplication" << endl;
  double d = 3;
  REQUIRE(Complex(1,2)*Complex(1,2) == Complex(-3,4));
  REQUIRE(Complex(1,-2)*Complex(1,2) == Complex(0,5));
  REQUIRE(Complex(5,0)*Complex(0,2) == Complex(0,10));
  REQUIRE(Complex(1,0)*Complex(1,0) == Complex(1,0));
  REQUIRE(Complex(10,-2)*Complex(5,-3) ==     Complex(44,-40));
  REQUIRE(Complex(1,0)*(d) == Complex(1,0));
}

TEST_CASE("Division Test", "[Divis]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Division" << endl;
  double d = 1;
  REQUIRE(Complex(1,2)/Complex(1,2) == Complex(1,0));
  REQUIRE(Complex(1,-2)/Complex(1,2) == Complex(-0.6,-0.8));
  REQUIRE(Complex(5,0)/Complex(0,2) == Complex(0,-2.5));
  REQUIRE(Complex(0,8)/Complex(0,4) == Complex(0,2));
  REQUIRE(Complex(10,-2)/Complex(5,-3) == Complex(1.64705882353,1.64705882353));
  REQUIRE(Complex(1,-2) / (d) == Complex(1,-2));
}

TEST_CASE("Absolute Value Test", "[Abs]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Absolute Value" << endl;
  REQUIRE(abs(Complex(1,2)) == Complex(2.2360679775,0));
  REQUIRE(abs(Complex(1,-2)) == Complex(2.2360679775,0));
  REQUIRE(abs(Complex(5,0)) == Complex(5,0));
  REQUIRE(abs(Complex(0,5)) == Complex(5,0));
  REQUIRE(abs(Complex(-4,-3)) == Complex(5,0));
}

TEST_CASE("Conjugate Test", "[conj]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Conjugate" << endl;
  REQUIRE(conj(Complex(1,2)) == Complex(1,-2));
  REQUIRE(conj(Complex(0,-2)) == Complex(0,2));
  REQUIRE(conj(Complex(3,0)) == Complex(3,0));
  REQUIRE(conj(Complex(50.5,3.33)) == Complex(50.5,-3.33));
}

TEST_CASE("NORM Test", "[norm]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Norm" << endl;
  REQUIRE(norm(Complex(1,2)) == Complex(2.2360679775,0));
  REQUIRE(norm(Complex(1,-2)) == Complex(2.2360679775,0));
  REQUIRE(norm(Complex(5,0)) == Complex(5,0));
  REQUIRE(norm(Complex(0,5)) == Complex(5,0));
  REQUIRE(norm(Complex(-4,-3)) == Complex(5,0));
}

TEST_CASE("Sqrt Test", "[sqrt]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Square Root" << endl;
  REQUIRE(sqrt(Complex(2,3)) == Complex(1.2247449,1.2247449));
  REQUIRE(sqrt(Complex(4,0)) == Complex(2,0));
  REQUIRE(sqrt(Complex(2,-2)) == Complex(1.553774,-0.6435943));
  REQUIRE(sqrt(Complex(-3,-3)) == Complex(0.7882388,-1.9029767));
}

TEST_CASE("Exp Test", "[e^x]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on power of ℮" << endl;
  REQUIRE(exp(Complex(2,0)) == Complex(7.3890561,0));
  REQUIRE(exp(Complex(0,4)) == Complex(-0.6536436,-0.7568025));
  REQUIRE(exp(Complex(2,-2)) == Complex(-3.0749323,-6.7188496));
  REQUIRE(exp(Complex(-3,-3)) == Complex(-0.0492888,-0.007026));
}

TEST_CASE("Arg Test", "[arg]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on the angle of the complex number" << endl;
  REQUIRE(arg(Complex(0,2)) == (1.570796));
  REQUIRE(arg(Complex(4,0)) == (0));
  REQUIRE(arg(Complex(9,2)) == (0.218669));
  REQUIRE(arg(Complex(-2.5,-2.5)) == (-2.356194));
}

TEST_CASE("Sine Test", "[sin]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on the sine" << endl;
   REQUIRE(sin(Complex(180,0)) == Complex(-0.8011526,0));
   REQUIRE(sin(Complex(0,-5)) == Complex(0,-74.2032106));
   REQUIRE(sin(Complex(3,-3)) == Complex(1.4207485,9.917621));
   REQUIRE(sin(Complex(-1.5,-2.5)) == Complex(-6.116928,-0.4279745));
}

TEST_CASE("Natural Log Test", "[log]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on natural log" << endl;
   REQUIRE(log(Complex(180,0)) == Complex(2.2552725,0));
   REQUIRE(log(Complex(0,-5)) == Complex(0.69897,-0.6821882));
   REQUIRE(log(Complex(3,-3)) == Complex(0.6276363,-0.3410941));
   REQUIRE(log(Complex(-1.5,-2.5)) == Complex(0.4647095,-0.9168894));
}

TEST_CASE("Hyperbolic Sine Test", "[isinh]") { 
      cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the hyperbolic sine of the complex number" << endl;
       REQUIRE(isinh(Complex(180,0)) == Complex(11.54873935725774837797,0));
       REQUIRE(isinh(Complex(0,-5)) == Complex(0,0.087377266801877849));
       REQUIRE(isinh(Complex(3,-3)) == Complex(0.052312015251,0.052312015251));
       REQUIRE(isinh(Complex(-1.5,-2.5)) == Complex(-0.0261580,-0.0436343));
}

TEST_CASE("Hyperbolic Cosine Test", "[icosh]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the hyperbolic cosine of the complex number" << endl;
       REQUIRE(icosh(Complex(180,0)) == Complex(11.5919532755215,0));
       REQUIRE(icosh(Complex(0,-5)) == Complex(0.996194,0));
       REQUIRE(icosh(Complex(3,-3)) == Complex(0.999998747,-0.002741556549));
       REQUIRE(icosh(Complex(-1.5,-2.5)) == Complex(0.99939061,0.0011420833));
}

TEST_CASE("Hyperbolic Tangent Test", "[itanh]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the hyperbolic cosine of the complex number" << endl;
       REQUIRE(itanh(Complex(180,0)) == Complex(0,0));
       REQUIRE(itanh(Complex(0,-5)) == Complex(0,-0.08748866352592));
       REQUIRE(itanh(Complex(3,-3)) == Complex(0.0524553655898,-0.0524553655898));
       REQUIRE(itanh(Complex(-1.5,-2.5)) == Complex(-0.0697000,0));
}

TEST_CASE("Imaginary Part Test", "[im]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the hyperbolic cosine of the complex number" << endl;
       REQUIRE(im(Complex(180,0)) == 0);
       REQUIRE(im(Complex(0,-5)) == -5);
       REQUIRE(im(Complex(3,-3)) == -3);
       REQUIRE(im(Complex(-1.5,-2.5)) == -2.5);
}
// TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
// {

//   cout << "Hello Catch2 Build with Catch2 main()\n";
//   cout << "Running tests on Factorial" << endl;
//   REQUIRE(Factorial(1) == 1);
//   REQUIRE(Factorial(2) == 2);
//   REQUIRE(Factorial(3) == 6);
//   REQUIRE(Factorial(4) == 24);
//   REQUIRE(Factorial(5) == 1);
// }
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN