#include "ComplexNumbersIO.h"

std::ostream& operator<<(std::ostream& os, const ComplexNumbers& numbers)
{
    return std::cout << "(" << numbers.GetA() << ")" << " + " << "(" << numbers.GetB() << " * i" << ")" << std::endl;
}

std::istream& operator>>(std::istream& in, ComplexNumbers& numbers)
{
    double a;
    double b;
    std::cout << "Enter the sequence. First A real part, then B imagine part" << std::endl;
    in >> a >> b;
    numbers.SetA(a);
    numbers.SetB(b);
    return in;
}

