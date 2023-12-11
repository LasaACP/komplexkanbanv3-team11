# Complete the CMake buid files

cmake_minimum_required(VERSION 3.10)
project(MyProject)

add_executable(MyProgram
  ../src/main_test.cpp
  ../lib/Complex.cpp
  ../lib/addition.cpp
  ../lib/equals.cpp
  ../lib/multi.cpp
  ../lib/divis.cpp
  ../lib/abs.cpp
  ../lib/conj.cpp
  ../lib/norm.cpp
  ../lib/sqrt.cpp
  ../lib/arg.cpp
  ../lib/exp.cpp
  ../lib/log.cpp
  ../lib/sin.cpp
  ../lib/icosh.cpp
  ../lib/isinh.cpp
  ../lib/itanh.cpp
  ../lib/sub.cpp
  ../lib/im.cpp
  ../lib/inpo.cpp
  ../lib/Complex.h
  ../lib/addition.h
  ../lib/equals.h
  ../lib/multi.h
  ../lib/divis.h
  ../lib/abs.h
  ../lib/conj.h
  ../lib/norm.h
  ../lib/sqrt.h
  ../lib/exp.h
  ../lib/arg.h
  ../lib/log.h
  ../lib/sin.h
  ../lib/sub.h
  ../lib/im.h
  ../lib/icosh.h
  ../lib/isinh.h
  ../lib/itanh.h
  ../lib/inpo.h
  ../tests/catch_amalgamated.cpp
  ../tests/catch_amalgamated.hpp
)
