#include "AllIncludes.h"

int main()
{
    ComplexNumbers a1; 
    std::cin >> a1;
    std::cout << a1 << std::endl;
    ComplexNumbers a31;
    std::cin >> a31;
    std::cout << a31 << std::endl;
    ComplexNumbers a61 = a1 + a31;
    std::cout << a61 << std::endl;
}