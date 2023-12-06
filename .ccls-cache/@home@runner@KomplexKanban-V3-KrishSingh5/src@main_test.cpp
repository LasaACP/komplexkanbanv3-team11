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
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Addition Test", "[+]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Addition" << endl;
  REQUIRE(Complex(1,2)+Complex(2,3) == Complex(3,5));
  REQUIRE(Complex(1,-2)+Complex(1,2) == Complex(2,0));
  REQUIRE(Complex(1,2)+Complex(-2,3) == Complex(-1,0));
  REQUIRE(Complex(5,0)+Complex(0,2) == Complex(5,2));
  REQUIRE(Complex(1,0)+Complex(1,0) == Complex(2,0));
}

TEST_CASE("Multiplication Test", "[*]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Multiplication" << endl;
  REQUIRE(Complex(1,2)*Complex(1,2) == Complex(-3,4));
  REQUIRE(Complex(1,-2)*Complex(1,2) == Complex(0,5));
  REQUIRE(Complex(5,0)*Complex(0,2) == Complex(0,10));
  REQUIRE(Complex(1,0)*Complex(1,0) == Complex(1,0));
  REQUIRE(Complex(10,-2)*Complex(5,-3) == Complex(44,-40));
}

TEST_CASE("Division Test", "/]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Division" << endl;
  REQUIRE(Complex(1,2)/Complex(1,2) == Complex(1,0));
  REQUIRE(Complex(1,-2)/Complex(1,2) == Complex(-0.6,-0/8));
  REQUIRE(Complex(5,0)/Complex(0,2) == Complex(0,-2.5));
  REQUIRE(Complex(0,8)/Complex(0,4) == Complex(0,2));
  REQUIRE(Complex(10,-2)/Complex(5,-3) == Complex(1.64705882353,1.64705882353));
}

TEST_CASE("Absolute Value Test", "||]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Absolute Value" << endl;
  REQUIRE(abs(Complex(1,2)) == Complex(2.2360679775,0));
  REQUIRE(abs(Complex(1,-2)) == Complex(2.2360679775,0));
  REQUIRE(abs(Complex(5,0)) == Complex(5,0));
  REQUIRE(abs(Complex(0,5)) == Complex(5,0));
  REQUIRE(abs(Complex(-4,-3)) == Complex(5,0));
}

TEST_CASE("Conjugate Test", "conj]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Conjugate" << endl;
  REQUIRE(conj(Complex(1,2)) == Complex(1,-2));
  REQUIRE(conj(Complex(0,-2)) == Complex(0,2));
  REQUIRE(conj(Complex(3,0)) == Complex(3,0));
  REQUIRE(conj(Complex(50.5,3.33)) == Complex(50.5,-3.33));
}

TEST_CASE("NORM Test", "norm]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Norm" << endl;
  REQUIRE(norm(Complex(1,2)) == Complex(2.2360679775,0));
  REQUIRE(norm(Complex(1,-2)) == Complex(2.2360679775,0));
  REQUIRE(norm(Complex(5,0)) == Complex(5,0));
  REQUIRE(norm(Complex(0,5)) == Complex(5,0));
  REQUIRE(norm(Complex(-4,-3)) == Complex(5,0));
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