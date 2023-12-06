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

TEST_CASE("Testing addition") {
  cout << "running tests on addition" << endl;
  REQUIRE(add(1,2) == 3);
  REQUIRE(add(14,2) == 16);
  REQUIRE(add(-1,2) == 1);
}

TEST_CASE("Testing subtraction") {
  cout << "running tests on subtraction" << endl;
  REQUIRE(sub(1,2) == -1);
  REQUIRE(sub(14,2) == 12);
  REQUIRE(sub(-4,3) == -7);
}

TEST_CASE("Testing multiplication") {
  cout << "running tests on multiplication" << endl;
  REQUIRE(mul(5,2) == 10);
  REQUIRE(mul(0,5) == 0);
  REQUIRE(mul(-1,2) == -2);
}

TEST_CASE("Testing division" ){
  cout << "running tests on division" << endl;
  REQUIRE(div(10,2) == 5);
  REQUIRE(div(20,4) == 5);
  REQUIRE(div(8,2) == 4);
}

TEST_CASE("Testing Logarithmic equation") {
  cout << "running tests on Logarithmic equation" << endl;
  REQUIRE(ln(0) == 1);
  REQUIRE(ln());
}

TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Factorial" << endl;
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(4) == 24);
  REQUIRE(Factorial(5) == 1);
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN