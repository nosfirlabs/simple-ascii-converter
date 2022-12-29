#include <iostream>

int main()
{
    char c;
    int i;

    std::cout << "Enter an ASCII character: ";
    std::cin >> c;

    // Convert ASCII character to integer value
    i = static_cast<int>(c);
    std::cout << "The integer value of '" << c << "' is: " << i << std::endl;

    std::cout << "Enter an integer value: ";
    std::cin >> i;

    // Convert integer value to ASCII character
    c = static_cast<char>(i);
    std::cout << "The ASCII character of " << i << " is: '" << c << "'" << std::endl;

    return 0;
}
