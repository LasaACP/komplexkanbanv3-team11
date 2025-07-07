
# KomplexKanban v3

Consists of a library of complex number tools including a Complex class with basic arithmetic capability (addition, subtraction, multipliction, etc) and function that take in complex numbers like hyperbolic trigometric functions and logarithms. Polar to complex conversion is also avaliable, as well as input/output capability.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

#### Compiler

To run KomplexKanban, you need a C++ compiler like GCC:

1. **GNU Compiler Collection**
	-  an optimizing compiler suite that supports many programming languages, including C, C++,Objective-C, C++, Fortran, Ada, D, and Go.
	- **Installation**
		- On Linux Ubuntu:
			```bash 
			sudo apt-get update
			sudo apt-get install g+
			```
		- On macOS w/ HomeBrew
			```bash
			brew install make
			```
		-	On Windows:
				Download and install [MinGW](http://mingw-w64.org/doku.php)
				
2. **CMake:**
	- A cross-platform build system generator,
	 -  **Installation:**  
		 - On Linux Ubuntu:
		```bash
		 sudo apt-get install build-essential cmake 
		 ``` 
		- On macOS w/ Homebrew:
		 ```bash 
		 brew install cmake 
		 ``` 
		- On Windows: 
		Download and install [CMake](https://cmake.org/download/)

3. **Make:**
	- Make is a build automation tool. 
	-  **Installation:**  
		- On Linux:
			 ```bash 
			 sudo apt-get install make 
			 ```
		- On macOS w/Homebrew
			```bash 
			brew install make 
			```
			On Windows, make is included with MinGW.

4. **Testing: Catch2**: 
-	Catch2 is a C++ testing framework.
	-  **Installation:**  
		- Download [Catch2 ](https://sourceforge.net/projects/catch2.mirror/) and include it in your project.

### Installing

A step by step series of examples that tell you how to get a development env running

Say what the step will be

**Clone the repository**

```
git clone https://github.com/LasaACP/komplexkanbanv3-team11
```

**Navigate to the cloned directory**

```
cd komplexkanbanv3-team11
```

**Create a build directory**

```
mkdir build
```


**Configure the make settings**

```
cmake ..
```


**Make the project**

```
make
```
**Demo Code to Run main.cpp**

```
./MyMain
```


Adjust the details based on your specific project requirements, file structure, and naming conventions.

## Running the tests

Run the command ./MyProgram in the shell to run the tests found in main_test.cpp

### Coding Style Tests in main_test.cpp

The tests test the arithmetic and mathematical functions found in the Complex library to ensure that their outputs are correct---each test verifies different scenarios including but not limited to negative values for the real and imaginary component, complex numbers with no real or imaginary component, or verifying that operator overloading is working with operations on double and complex numbers. Additionally, when certain functions like hyperbolic sine require other complex functions like division, the test verifies that all parts of the library are a cohesive unit that can be mixed in with each other. Furthermore, both output and input of the complex class are tested during this process. 

Here is an example involving complex division:

```
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
```

Here is the example above passing the test case via ./MyProgram:

```
Running tests on Complex Division
Hello Catch2 Build with Catch2 main()
```

## Deployment

  
1.  **Prepare the Environment:**  
	- Ensure that the chosen system meets all the necessary requirements and dependenices, include a C++ compiler like GCC (see above).
3.  **Clone the Repository on the Live System:**  
	- Clone the project repository onto the live system using a secure connection or download the project release if available. 
```
git clone https://github.com/LasaACP/komplexkanbanv3-team11
```	
## Built With

* [GNU Tools](https://www.gnu.org/software/gcc/) - GNU compiler tools
* [Replit](https://replit.com/) - Replit Online IDE
* [CMake](https://cmake.org/) - C++ Software Build Manager
* [Catch2](https://github.com/catchorg/Catch2) - C++ Native Test Framework for Unit Tests

## Structure
``` text
.
├── build
│   ├── build2
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   │   ├── 3.24.3
│   │   │   ├── CMakeCCompiler.cmake
│   │   │   ├── CMakeCXXCompiler.cmake
│   │   │   ├── CMakeDetermineCompilerABI_C.bin
│   │   │   ├── CMakeDetermineCompilerABI_CXX.bin
│   │   │   ├── CMakeSystem.cmake
│   │   │   ├── CompilerIdC
│   │   │   │   ├── a.out
│   │   │   │   ├── CMakeCCompilerId.c
│   │   │   │   └── tmp
│   │   │   └── CompilerIdCXX
│   │   │       ├── a.out
│   │   │       ├── CMakeCXXCompilerId.cpp
│   │   │       └── tmp
│   │   ├── cmake.check_cache
│   │   ├── CMakeDirectoryInformation.cmake
│   │   ├── CMakeOutput.log
│   │   ├── CMakeTmp
│   │   ├── Makefile2
│   │   ├── Makefile.cmake
│   │   ├── MyMain.dir
│   │   │   ├── build.make
│   │   │   ├── cmake_clean.cmake
│   │   │   ├── compiler_depend.internal
│   │   │   ├── compiler_depend.make
│   │   │   ├── compiler_depend.ts
│   │   │   ├── DependInfo.cmake
│   │   │   ├── depend.make
│   │   │   ├── flags.make
│   │   │   ├── lib
│   │   │   │   ├── abs.cpp.o
│   │   │   │   ├── abs.cpp.o.d
│   │   │   │   ├── addition.cpp.o
│   │   │   │   ├── addition.cpp.o.d
│   │   │   │   ├── arg.cpp.o
│   │   │   │   ├── arg.cpp.o.d
│   │   │   │   ├── Complex.cpp.o
│   │   │   │   ├── Complex.cpp.o.d
│   │   │   │   ├── conj.cpp.o
│   │   │   │   ├── conj.cpp.o.d
│   │   │   │   ├── divis.cpp.o
│   │   │   │   ├── divis.cpp.o.d
│   │   │   │   ├── equals.cpp.o
│   │   │   │   ├── equals.cpp.o.d
│   │   │   │   ├── exp.cpp.o
│   │   │   │   ├── exp.cpp.o.d
│   │   │   │   ├── icosh.cpp.o
│   │   │   │   ├── icosh.cpp.o.d
│   │   │   │   ├── im.cpp.o
│   │   │   │   ├── im.cpp.o.d
│   │   │   │   ├── inequals.cpp.o
│   │   │   │   ├── inequals.cpp.o.d
│   │   │   │   ├── inpo.cpp.o
│   │   │   │   ├── inpo.cpp.o.d
│   │   │   │   ├── isinh.cpp.o
│   │   │   │   ├── isinh.cpp.o.d
│   │   │   │   ├── itanh.cpp.o
│   │   │   │   ├── itanh.cpp.o.d
│   │   │   │   ├── log.cpp.o
│   │   │   │   ├── log.cpp.o.d
│   │   │   │   ├── multi.cpp.o
│   │   │   │   ├── multi.cpp.o.d
│   │   │   │   ├── norm.cpp.o
│   │   │   │   ├── norm.cpp.o.d
│   │   │   │   ├── polar.cpp.o
│   │   │   │   ├── polar.cpp.o.d
│   │   │   │   ├── real.cpp.o
│   │   │   │   ├── real.cpp.o.d
│   │   │   │   ├── sin.cpp.o
│   │   │   │   ├── sin.cpp.o.d
│   │   │   │   ├── sqrt.cpp.o
│   │   │   │   ├── sqrt.cpp.o.d
│   │   │   │   ├── sub.cpp.o
│   │   │   │   └── sub.cpp.o.d
│   │   │   ├── link.txt
│   │   │   ├── nlib
│   │   │   │   ├── atrigbundle.cpp.o
│   │   │   │   ├── atrigbundle.cpp.o.d
│   │   │   │   ├── cos.cpp.o
│   │   │   │   ├── cos.cpp.o.d
│   │   │   │   ├── log10.cpp.o
│   │   │   │   ├── log10.cpp.o.d
│   │   │   │   ├── pow.cpp.o
│   │   │   │   ├── pow.cpp.o.d
│   │   │   │   ├── root.cpp.o
│   │   │   │   ├── root.cpp.o.d
│   │   │   │   ├── tan.cpp.o
│   │   │   │   └── tan.cpp.o.d
│   │   │   ├── progress.make
│   │   │   ├── src
│   │   │   │   ├── main.cpp.o
│   │   │   │   ├── main.cpp.o.d
│   │   │   │   ├── main_test.cpp.o
│   │   │   │   └── main_test.cpp.o.d
│   │   │   └── tests
│   │   │       ├── catch_amalgamated.cpp.o
│   │   │       └── catch_amalgamated.cpp.o.d
│   │   ├── MyProgram.dir
│   │   │   ├── build.make
│   │   │   ├── cmake_clean.cmake
│   │   │   ├── compiler_depend.internal
│   │   │   ├── compiler_depend.make
│   │   │   ├── compiler_depend.ts
│   │   │   ├── DependInfo.cmake
│   │   │   ├── depend.make
│   │   │   ├── flags.make
│   │   │   ├── lib
│   │   │   │   ├── abs.cpp.o
│   │   │   │   ├── abs.cpp.o.d
│   │   │   │   ├── addition.cpp.o
│   │   │   │   ├── addition.cpp.o.d
│   │   │   │   ├── arg.cpp.o
│   │   │   │   ├── arg.cpp.o.d
│   │   │   │   ├── Complex.cpp.o
│   │   │   │   ├── Complex.cpp.o.d
│   │   │   │   ├── conj.cpp.o
│   │   │   │   ├── conj.cpp.o.d
│   │   │   │   ├── divis.cpp.o
│   │   │   │   ├── divis.cpp.o.d
│   │   │   │   ├── equals.cpp.o
│   │   │   │   ├── equals.cpp.o.d
│   │   │   │   ├── exp.cpp.o
│   │   │   │   ├── exp.cpp.o.d
│   │   │   │   ├── icosh.cpp.o
│   │   │   │   ├── icosh.cpp.o.d
│   │   │   │   ├── im.cpp.o
│   │   │   │   ├── im.cpp.o.d
│   │   │   │   ├── inequals.cpp.o
│   │   │   │   ├── inequals.cpp.o.d
│   │   │   │   ├── inpo.cpp.o
│   │   │   │   ├── inpo.cpp.o.d
│   │   │   │   ├── isinh.cpp.o
│   │   │   │   ├── isinh.cpp.o.d
│   │   │   │   ├── itanh.cpp.o
│   │   │   │   ├── itanh.cpp.o.d
│   │   │   │   ├── log.cpp.o
│   │   │   │   ├── log.cpp.o.d
│   │   │   │   ├── multi.cpp.o
│   │   │   │   ├── multi.cpp.o.d
│   │   │   │   ├── norm.cpp.o
│   │   │   │   ├── norm.cpp.o.d
│   │   │   │   ├── polar.cpp.o
│   │   │   │   ├── polar.cpp.o.d
│   │   │   │   ├── real.cpp.o
│   │   │   │   ├── real.cpp.o.d
│   │   │   │   ├── sin.cpp.o
│   │   │   │   ├── sin.cpp.o.d
│   │   │   │   ├── sqrt.cpp.o
│   │   │   │   ├── sqrt.cpp.o.d
│   │   │   │   ├── sub.cpp.o
│   │   │   │   └── sub.cpp.o.d
│   │   │   ├── link.txt
│   │   │   ├── nlib
│   │   │   │   ├── atrigbundle.cpp.o
│   │   │   │   ├── atrigbundle.cpp.o.d
│   │   │   │   ├── cos.cpp.o
│   │   │   │   ├── cos.cpp.o.d
│   │   │   │   ├── log10.cpp.o
│   │   │   │   ├── log10.cpp.o.d
│   │   │   │   ├── pow.cpp.o
│   │   │   │   ├── pow.cpp.o.d
│   │   │   │   ├── root.cpp.o
│   │   │   │   ├── root.cpp.o.d
│   │   │   │   ├── tan.cpp.o
│   │   │   │   └── tan.cpp.o.d
│   │   │   ├── progress.make
│   │   │   ├── src
│   │   │   │   ├── main.cpp.o
│   │   │   │   ├── main.cpp.o.d
│   │   │   │   ├── main_test.cpp.o
│   │   │   │   └── main_test.cpp.o.d
│   │   │   └── tests
│   │   │       ├── catch_amalgamated.cpp.o
│   │   │       └── catch_amalgamated.cpp.o.d
│   │   ├── MyValid.dir
│   │   │   ├── build.make
│   │   │   ├── cmake_clean.cmake
│   │   │   ├── compiler_depend.internal
│   │   │   ├── compiler_depend.make
│   │   │   ├── compiler_depend.ts
│   │   │   ├── DependInfo.cmake
│   │   │   ├── depend.make
│   │   │   ├── flags.make
│   │   │   ├── lib
│   │   │   │   ├── abs.cpp.o
│   │   │   │   ├── abs.cpp.o.d
│   │   │   │   ├── addition.cpp.o
│   │   │   │   ├── addition.cpp.o.d
│   │   │   │   ├── arg.cpp.o
│   │   │   │   ├── arg.cpp.o.d
│   │   │   │   ├── Complex.cpp.o
│   │   │   │   ├── Complex.cpp.o.d
│   │   │   │   ├── conj.cpp.o
│   │   │   │   ├── conj.cpp.o.d
│   │   │   │   ├── divis.cpp.o
│   │   │   │   ├── divis.cpp.o.d
│   │   │   │   ├── equals.cpp.o
│   │   │   │   ├── equals.cpp.o.d
│   │   │   │   ├── exp.cpp.o
│   │   │   │   ├── exp.cpp.o.d
│   │   │   │   ├── icosh.cpp.o
│   │   │   │   ├── icosh.cpp.o.d
│   │   │   │   ├── im.cpp.o
│   │   │   │   ├── im.cpp.o.d
│   │   │   │   ├── inequals.cpp.o
│   │   │   │   ├── inequals.cpp.o.d
│   │   │   │   ├── inpo.cpp.o
│   │   │   │   ├── inpo.cpp.o.d
│   │   │   │   ├── isinh.cpp.o
│   │   │   │   ├── isinh.cpp.o.d
│   │   │   │   ├── itanh.cpp.o
│   │   │   │   ├── itanh.cpp.o.d
│   │   │   │   ├── log.cpp.o
│   │   │   │   ├── log.cpp.o.d
│   │   │   │   ├── multi.cpp.o
│   │   │   │   ├── multi.cpp.o.d
│   │   │   │   ├── norm.cpp.o
│   │   │   │   ├── norm.cpp.o.d
│   │   │   │   ├── polar.cpp.o
│   │   │   │   ├── polar.cpp.o.d
│   │   │   │   ├── real.cpp.o
│   │   │   │   ├── real.cpp.o.d
│   │   │   │   ├── sin.cpp.o
│   │   │   │   ├── sin.cpp.o.d
│   │   │   │   ├── sqrt.cpp.o
│   │   │   │   ├── sqrt.cpp.o.d
│   │   │   │   ├── sub.cpp.o
│   │   │   │   └── sub.cpp.o.d
│   │   │   ├── link.txt
│   │   │   ├── nlib
│   │   │   │   ├── atrigbundle.cpp.o
│   │   │   │   ├── atrigbundle.cpp.o.d
│   │   │   │   ├── cos.cpp.o
│   │   │   │   ├── cos.cpp.o.d
│   │   │   │   ├── log10.cpp.o
│   │   │   │   ├── log10.cpp.o.d
│   │   │   │   ├── pow.cpp.o
│   │   │   │   ├── pow.cpp.o.d
│   │   │   │   ├── root.cpp.o
│   │   │   │   ├── root.cpp.o.d
│   │   │   │   ├── tan.cpp.o
│   │   │   │   └── tan.cpp.o.d
│   │   │   ├── progress.make
│   │   │   └── src
│   │   │       ├── arithvalid.cpp.o
│   │   │       └── arithvalid.cpp.o.d
│   │   ├── pkgRedirects
│   │   ├── progress.marks
│   │   └── TargetDirectories.txt
│   ├── cmake_install.cmake
│   ├── libmyLibrary.a
│   ├── libMyLibrary.a
│   ├── Makefile
│   ├── MyMain
│   ├── MyProgram
│   └── MyValid
├── CMakeLists.txt
├── komplexkanbanv3-team11
├── lib
│   ├── abs.cpp
│   ├── abs.h
│   ├── addition.cpp
│   ├── addition.h
│   ├── arg.cpp
│   ├── arg.h
│   ├── Complex.cpp
│   ├── Complex.h
│   ├── conj.cpp
│   ├── conj.h
│   ├── divis.cpp
│   ├── divis.h
│   ├── equals.cpp
│   ├── equals.h
│   ├── exp.cpp
│   ├── exp.h
│   ├── fac.cpp
│   ├── fac.h
│   ├── icosh.cpp
│   ├── icosh.h
│   ├── im.cpp
│   ├── im.h
│   ├── inequals.cpp
│   ├── inequals.h
│   ├── inpo.cpp
│   ├── inpo.h
│   ├── isinh.cpp
│   ├── isinh.h
│   ├── itanh.cpp
│   ├── itanh.h
│   ├── log.cpp
│   ├── log.h
│   ├── multi.cpp
│   ├── multi.h
│   ├── norm.cpp
│   ├── norm.h
│   ├── polar.cpp
│   ├── polar.h
│   ├── real.cpp
│   ├── real.h
│   ├── sin.cpp
│   ├── sin.h
│   ├── sqrt.cpp
│   ├── sqrt.h
│   ├── sub.cpp
│   └── sub.h
├── main-debug
├── Makefile
├── nlib
│   ├── atrigbundle.cpp
│   ├── atrigbundle.h
│   ├── cos.cpp
│   ├── cos.h
│   ├── log10.cpp
│   ├── log10.h
│   ├── pow.cpp
│   ├── pow.h
│   ├── root.cpp
│   ├── root.h
│   ├── tan.cpp
│   └── tan.h
├── replit.nix
├── result -> /nix/store/ycbh5a0p3ksbynxirbs5j1rzajb901pj-nix-shell
├── src
│   ├── arithvalid.cpp
│   ├── main.cpp
│   └── main_test.cpp
└── tests
    ├── catch_amalgamated.cpp
    ├── catch_amalgamated.hpp
    └── catch_amalgamated.o
```

Sources and main programs go in [src/](src/), header files and implementations in [lib/](lib/), unimplemented functions in [nlib/](nlib/), and
tests go in [tests/](tests/) (compiled to `unit_tests` by default).

If you add a new executable, say `app/hello.cpp`, you only need to add the following two lines to [CMakeLists.txt](CMakeLists.txt):

```cmake
add_executable(hello app/hello.cpp) 
target_link_libraries(hello PRIVATE lib)
```

You can find the example source code that builds the `main` executable in [MyMain](MyMain)  in [CMakeLists.txt](CMakeLists.txt).

If the executable you made does not use the library in [lib/](lib), then only the first line is needed.



## Building

Build by making a build directory (i.e. `build/`), run `cmake ..` in that dir, and then use `make` to build the desired target.

Example:

```bash
mkdir build && cd build
cmake .. 
make
./MyMain
```

## .gitignore

The [.gitignore](.gitignore) file is a copy of the [Github C++.gitignore file](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore),
with the addition of ignoring the build directory (`build/`).



## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Krish Singh** - *Testing Work, Building, and Implementation* - [ecflorui](https://github.com/ecflorui)
* **Sawyer Prescott** - *Testing Work, Building, and Implementation* - [Preficks](https://github.com/Preficks)
 * **Aravis Lenfest** - *Testing Work and Implementation* - [AravisVLenfest](https://github.com/AravisVLenfest)
  * **Nidhi Allaboyina** - *Testing Work and Implementation* - [s10020096](https://github.com/S10020096)

See also the list of [contributors](https://github.com/orgs/LasaACP/teams/team11) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Mr. Shockey Provided the Intial Template for the KomplexKanban Project
* Desmos, Symbolab, and HackMath.net for functionality for completing unit tests and implementation
