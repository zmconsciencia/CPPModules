#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b(5.05f);  // Create a Fixed object from a float
    Fixed c(2);
    Fixed inc;

    // Printing initial values
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    // Arithmetic operations
    Fixed sum = a + b;
    Fixed difference = a - b;
    Fixed product = b * c;
    Fixed quotient = b / c;

    std::cout << "a + b: " << sum << std::endl;
    std::cout << "a - b: " << difference << std::endl;
    std::cout << "b * c: " << product << std::endl;
    std::cout << "b / c: " << quotient << std::endl;

    // Comparison operations
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;

    // Increment and decrement operations
    Fixed d = a++;
    Fixed e = ++a;
    Fixed f = b--;
    Fixed g = --b;


    std::cout << ++inc << std::endl;
    std::cout << "a++ (post-increment): " << d << std::endl;
    std::cout << "++a (pre-increment): " << e << std::endl;
    std::cout << "b-- (post-decrement): " << f << std::endl;
    std::cout << "--b (pre-decrement): " << g << std::endl;

    // Min and Max functions
    Fixed minResult = Fixed::min(a, b);
    Fixed maxResult = Fixed::max(a, b);

    std::cout << "Min(a, b): " << minResult << std::endl;
    std::cout << "Max(a, b): " << maxResult << std::endl;

    return 0;
}
