// https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
#include <iostream>

int main(int, char **)
{
    [[maybe_unused]] int a; // default-initialization (no initializer)

    // Traditional initialization forms:
    [[maybe_unused]] int b = 5; // copy-initialization (initial value after equals sign)
    [[maybe_unused]] int c(6);  // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    [[maybe_unused]] int d{7}; // direct-list initialization (initial value in braces)
    [[maybe_unused]] int e{};  // value-initialization (empty braces)

    // Multiple initialization forms (not-preferred):
    [[maybe_unused]] int f, g;         // create variables a and b, but do not initialize them
    [[maybe_unused]] int h = 5, i = 6; // copy-initialization
    [[maybe_unused]] int j(7), k(8);   // direct-initialization
    [[maybe_unused]] int l{9}, m{10};  // direct-list-initialization
    [[maybe_unused]] int n{}, o{};     // value-initialization

    std::cout << "Different ways to initialize a variable in c++\n\n";
    return 0;
}
