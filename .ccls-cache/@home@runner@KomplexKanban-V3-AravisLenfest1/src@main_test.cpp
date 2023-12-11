/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../src/fac.h"
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

TEST_CASE("Testing addition", "[Add]") {
  cout << "running tests on addition" << endl;
  REQUIRE(Complex(1,2) + Complex(2,3) == Complex(3,5));
  REQUIRE(Complex(14,2) + Complex(1,1) == Complex(15,3));
  REQUIRE(Complex(-1,2) + Complex(4,8) == Complex(3,10));
}

TEST_CASE("Testing subtraction", "[Sub") {
  cout << "running tests on subtraction" << endl;
  REQUIRE(Complex(3,4)-Complex(2,3) == Complex(1,1));
  REQUIRE(Complex(-5,4)-Complex(2,-1) == Complex(-7,5));
  REQUIRE(Complex(1,0)-Complex(1,3) == Complex(0,-3));

}

TEST_CASE("Testing absolute value", "[abs]") {
  cout << "running tests on absolute value" << endl;
  REQUIRE(abs(Complex(1,2)) == Complex(2.2360679775,0));
  REQUIRE(abs(Complex(10,0)) == Complex(10,0));
  REQUIRE(abs(Complex(-4,-3)) == Complex(5,0));
}

TEST_CASE("Testing multiplication", "[Multi]") {
  cout << "running tests on multiplication" << endl;
  REQUIRE(Complex(5,2) * Complex(2,3) == Complex(4,19));
  REQUIRE(Complex(1,2) * Complex(1,2) == Complex(-3,4));
  REQUIRE(Complex(10,-2) * Complex(5,-3) == Complex(44,40));
}

TEST_CASE("Testing division","[Divis]" ){
  cout << "running tests on division" << endl;
  REQUIRE(Complex(10,2) / Complex(10,2) == Complex(1,0));
  REQUIRE(Complex(1,-2) / Complex(1,2) == Complex(-0.6,-0.8));
  REQUIRE(Complex(10,2) / Complex(10,2) == Complex(1,0));
}

TEST_CASE("Testing Logarithmic equation") {
  cout << "running tests on Logarithmic equation" << endl;
  REQUIRE(log(Complex(1,0)) == 0);
  REQUIRE(ln());
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