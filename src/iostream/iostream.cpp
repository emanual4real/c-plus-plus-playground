// https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/
#include <iostream>

int main(int, char **)
{
    int a{5};

    // std::cout is buffered and text will eventually be flushed and released to the console
    std::cout << "Hello world!";
    std::cout << "a is equal to: " << a;

    // print separate lines
    std::cout << "My name is Alex." << std::endl; // slower as std::endl will flush the buffer
    std::cout << "My name is Alex.\n";            // faster

    std::cout << "Enter a number: "; // ask user for a number

    // std::cin is buffered and >> will remove characters from the buffer
    int b{};       // define variable b to hold user input (and value-initialize it)
    std::cin >> b; // get number from kebboard and store it in variable b

    std::cout << "You entered " << b << '\n';

    std::cout << "Enter two numbers separated by a space: ";

    int x{};            // define variable x to hold user input (and value-initialize it)
    int y{};            // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}
