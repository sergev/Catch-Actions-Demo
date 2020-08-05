![C/C++ CI](https://github.com/sergev/Catch-Actions-Demo/workflows/C/C++%20CI/badge.svg)

Here you can find a demo of a C++ application with an automated testing using Github Actions service.

Anytime you want to start a new project in C++, feel free to use this code as a skeleton.
Copy the contents to your repository and build your code upon it.

File demo.cpp contains a code for fibonacci() function.

File demo_test.cpp has a few tests to make sure the fibonacci() function works correctly.

To test the code from command line, run:

    make test

After every commit, visit the Actions tab and review the results of automated testing.

Links:

 * https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md
 * https://docs.github.com/en/actions

Source files:

 * demo.hpp - declaration of fibonacci() routine
 * demo.cpp - implementation of fibonacci() routine
 * demo_test.cpp - tests for fibonacci() routine, using Catch
 * catch/catch.hpp - header-only version of Catch2 framework, downloaded from https://github.com/catchorg/Catch2/releases/download/v2.13.0/catch.hpp
 * catch/catch.cpp - placeholder for the main() routine of Catch2 framework
