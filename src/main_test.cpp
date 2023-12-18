










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
#include "../lib/real.h"
#include "../lib/inequals.h"
#include "../nlib/log10.h"
#include "../nlib/root.h"
#include "../nlib/pow.h"
#include "../nlib/cos.h"
#include "../nlib/tan.h"
#include "../nlib/atrigbundle.h"
#include "../lib/polar.h"


#include "../tests/catch_amalgamated.hpp"
#include <iostream>

using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN


int main_test( int argc, char* argv[] ) {

int main(int argc, char *argv[]) {

  // global setup...

  int result = Catch::Session().run(argc, argv);

  // global clean-up...
  cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else  // Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Addition Test", "[Add]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Addition" << endl;
  double d = 3;
  REQUIRE(Complex(1, 2) + Complex(2, 3) == Complex(3, 5));
  REQUIRE(Complex(1, -2) + Complex(1, 2) == Complex(2, 0));
  REQUIRE(Complex(1, 2) + Complex(-2, 3) == Complex(-1, 5));
  REQUIRE(Complex(5, 0) + Complex(0, 2) == Complex(5, 2));
  REQUIRE(Complex(1, 0) + Complex(1, 0) == Complex(2, 0));
  REQUIRE(Complex(1, 0) + (d) == Complex(4, 0));
}

TEST_CASE("Subtraction Test", "[Sub]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Subtraction" << endl;
  double d = 3;
  REQUIRE(Complex(1, 2) - Complex(2, 3) == Complex(-1, -1));
  REQUIRE(Complex(1, -2) - Complex(1, 2) == Complex(0, -4));
  REQUIRE(Complex(1, 2) - Complex(-2, 3) == Complex(3, -1));
  REQUIRE(Complex(5, 0) - Complex(0, 2) == Complex(5, -2));
  REQUIRE(Complex(1, 0) - Complex(1, 0) == Complex(0, 0));
  REQUIRE(Complex(1, 1) - (d) == Complex(-2, 1));
}

TEST_CASE("Multiplication Test", "[Multi]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Multiplication" << endl;
  double d = 3;
  REQUIRE(Complex(1, 2) * Complex(1, 2) == Complex(-3, 4));
  REQUIRE(Complex(1, -2) * Complex(1, 2) == Complex(5, 0));
  REQUIRE(Complex(5, 0) * Complex(0, 2) == Complex(0, 10));
  REQUIRE(Complex(1, 0) * Complex(1, 0) == Complex(1, 0));
  REQUIRE(Complex(10, -2) * Complex(5, -3) == Complex(44, -40));
  REQUIRE(Complex(1, 0) * (d) == Complex(3, 0));
}

TEST_CASE("Division Test", "[Div]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Division" << endl;
  double d = 1;
  REQUIRE(Complex(1, 2) / Complex(1, 2) == Complex(1, 0));
  REQUIRE(Complex(1, -2) / Complex(1, 2) == Complex(-0.6, -0.8));
  REQUIRE(Complex(5, 0) / Complex(0, 2) == Complex(0, -2.5));
  REQUIRE(Complex(0, 8) / Complex(0, 4) == Complex(0, 2));
  REQUIRE(Complex(1, -2) / (d) == Complex(1, -2));
}

TEST_CASE("Natural Log Test", "[log]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Natural Log" << endl;
  REQUIRE(log(Complex(1, 2)) ==
          Complex(0.6931471805599453, 1.6094379124341003));
  REQUIRE(log(Complex(1, -2)) == Complex(-0.6931471805, -1.6094379124341003));
  REQUIRE(log(Complex(5, 0)) ==
          Complex(0.6931471805599453, 1.6094379124341003));
  REQUIRE(log(Complex(1, 0)) ==
          Complex(0.6931471805599453, 1.6094379124341003));
  REQUIRE(log(Complex(-1.5, -2.5)) == Complex(0.4647095, -0.9168894));
}

/*TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{

>>>>>>> 903275d (this is a commit)
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
  REQUIRE(Complex(1,-2)*Complex(1,2) == Complex(5,0));
  REQUIRE(Complex(5,0)*Complex(0,2) == Complex(0,10));
  REQUIRE(Complex(1,0)*Complex(1,0) == Complex(1,0));
  REQUIRE(Complex(10,-2)*Complex(5,-3) ==     Complex(44,-40));
  REQUIRE(Complex(1,0)*(d) == Complex(3,0));
}

TEST_CASE("Division Test", "[Divis]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Division" << endl;
  double d = 1;
  REQUIRE(Complex(1,2)/Complex(1,2) == Complex(1,0));
  REQUIRE(Complex(1,-2)/Complex(1,2) == Complex(-0.6,-0.8));
  REQUIRE(Complex(5,0)/Complex(0,2) == Complex(0,-2.5));
  REQUIRE(Complex(0,8)/Complex(0,4) == Complex(2,0));
  REQUIRE(Complex(10,-2)/Complex(5,-3) == Complex(1.6471,0.5882));
  REQUIRE(Complex(1,-2) / (d) == Complex(1,-2));
}

TEST_CASE("Absolute Value Test", "[Abs]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex Absolute Value" << endl;
  REQUIRE(abs(Complex(1,2)) == Complex(2.2361,0));
  REQUIRE(abs(Complex(1,-2)) == Complex(2.2361,0));
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
  REQUIRE(norm(Complex(1,2)) == Complex(5,0));
  REQUIRE(norm(Complex(1,-2)) == Complex(5,0));
  REQUIRE(norm(Complex(5,0)) == Complex(25,0));
  REQUIRE(norm(Complex(0,5)) == Complex(25,0));
  REQUIRE(norm(Complex(-4,-3)) == Complex(25,0));
  REQUIRE(norm(Complex(-0.25,-0.01)) == Complex(0.0626,0));
}

TEST_CASE("Sqrt Test", "[sqrt]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Square Root" << endl;
  REQUIRE(sqrt(Complex(2,3)) == Complex(1.6741,0.8960));
  REQUIRE(sqrt(Complex(4,0)) == Complex(2,0));
  REQUIRE(sqrt(Complex(2,-2)) == Complex(1.5538,-0.6436));
  REQUIRE(sqrt(Complex(-3,-3)) == Complex(0.7882,-1.9030));
}

TEST_CASE("Exp Test", "[e^x]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on power of ℮" << endl;
  REQUIRE(exp(Complex(2,0)) == Complex(7.3891,0));
  REQUIRE(exp(Complex(0,4)) == Complex(-0.6536,-0.7568));
  REQUIRE(exp(Complex(2,-2)) == Complex(-3.0749,-6.7188));
  REQUIRE(exp(Complex(-3,-3)) == Complex(-0.0493,-0.0070));
}

TEST_CASE("Arg Test", "[arg]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on the angle of the complex number" << endl;
  REQUIRE(arg(Complex(2,0)) == (0));
  REQUIRE(arg(Complex(4,1)) == (0.2450));
  REQUIRE(arg(Complex(9,2)) == (0.2187));
  REQUIRE(arg(Complex(9,-2.5)) == (-0.2709));
  REQUIRE(arg(Complex(-0.7,-0.1)) == (0.1419));
}

TEST_CASE("Sine Test", "[sin]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on the sine" << endl;
   REQUIRE(sin(Complex(180,0)) == Complex(-0.8012,0));
   REQUIRE(sin(Complex(0,-5)) == Complex(0,-74.2032));
   REQUIRE(sin(Complex(3,-3)) == Complex(1.4207,9.9176));
   REQUIRE(sin(Complex(-1.5,-2.5)) == Complex(-6.1169,-0.4280));
}

TEST_CASE("Natural Log Test", "[log]") {
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on natural log" << endl;
   REQUIRE(log(Complex(180,0)) == Complex(5.193,0));
   REQUIRE(log(Complex(0,-5)) == Complex(1.6094, -1.5708));
   REQUIRE(log(Complex(3,-3)) == Complex(1.4452, -0.7854));
   REQUIRE(log(Complex(-1.5,-2.5)) == Complex(1.07, -2.1112)
);
}

TEST_CASE("Hyperbolic Sine Test", "[isinh]") { 
      cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the hyperbolic sine of the complex number" << endl;
       REQUIRE(isinh(Complex(4,0)) == Complex(27.2899,0));
       REQUIRE(isinh(Complex(0,-5)) == Complex(0, 0.9589)
);
       REQUIRE(isinh(Complex(3,-3)) == Complex(-9.9176, -1.4207));
       REQUIRE(isinh(Complex(-1.5,-2.5)) == Complex(1.7059, -1.4079)
);
}

TEST_CASE("Hyperbolic Cosine Test", "[icosh]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the hyperbolic cosine of the complex number" << endl;
       REQUIRE(icosh(Complex(4,0)) == Complex(27.3082,0));
       REQUIRE(icosh(Complex(0,-5)) == Complex(0.2837,0));
       REQUIRE(icosh(Complex(3,-3)) == Complex(-9.9669,-1.4137));
       REQUIRE(icosh(Complex(-1.5,-2.5)) == Complex(-1.8846,1.2743));
}

TEST_CASE("Hyperbolic Tangent Test", "[itanh]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the hyperbolic cosine of the complex number" << endl;
       REQUIRE(itanh(Complex(4,0)) == Complex(0.9993, 0)
);
       REQUIRE(itanh(Complex(0,-5)) == Complex(0, 3.3805));
       REQUIRE(itanh(Complex(3,-3)) == Complex(0.9953, 0.0014)
);
       REQUIRE(itanh(Complex(-1.5,-2.5)) == Complex(-0.9678, 0.0926)
);
}

TEST_CASE("Imaginary Part Test", "[im]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the imaginary component of the complex number" << endl;
       REQUIRE(im(Complex(180,0)) == 0);
       REQUIRE(im(Complex(0,-5)) == -5);
       REQUIRE(im(Complex(3,-3)) == -3);
       REQUIRE(im(Complex(-1.5,-2.5)) == -2.5);
}

TEST_CASE("Real Part Test", "[re]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on the real component of the complex number" << endl;
       REQUIRE(real(Complex(180,0)) == 180);
       REQUIRE(real(Complex(0,-5)) == 0);
       REQUIRE(real(Complex(3,-3)) == 3);
       REQUIRE(real(Complex(-1.5,-2.5)) == -1.5);
}

  TEST_CASE("Polar to Complex Test", "[plr]"){
    cout << "Hello Catch2 Build with Catch2 main()\n";
      cout << "Running tests on converting polar to complex" << endl;
       REQUIRE(polar(10,3) == Complex(-9.8999,1.4112));
       REQUIRE(polar(4,6.15) == Complex(3.9646,-0.5312));
       REQUIRE(polar(3,2.4248) == Complex(-2.2618,1.9709));
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
#endif // ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
