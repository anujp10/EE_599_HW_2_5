#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::string str = "TEST";
    std::string str1 = "TEST";
    std::string str2 = "EE599";
    unsigned int i = 0, j = 1;
    solution.SwapCharacters(str, i, j);
    std::cout << str << std::endl;
    solution.Reversestring(str1);
    std::cout << "Reverse string: " << str1 << std::endl;
    solution.Tolowerstring(str2);
    std::cout << "Lowercase string: " << str2 << std::endl;
    return EXIT_SUCCESS;
}