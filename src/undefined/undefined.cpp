// https://www.learncpp.com/cpp-tutorial/uninitialized-variables-and-undefined-behavior/
#include <iostream>

int main(int, char **)
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized

    // Using Uninitialized variables can cause undefined behavior and result in:
    // Your program produces different results every time it is run.
    // Your program consistently produces the same incorrect result.
    // Your program behaves inconsistently (sometimes produces the correct result, sometimes not).
    // Your program seems like it’s working but produces incorrect results later in the program.
    // Your program crashes, either immediately or later.
    // Your program works on some compilers but not others.
    // Your program works until you change some other seemingly unrelated code.
    return 0;
}
