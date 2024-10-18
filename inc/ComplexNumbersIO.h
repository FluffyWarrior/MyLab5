#ifndef COMPLEX_NUMBERS_IO_H
#define COMPLEX_NUMBERS_IO_H
#include "AllIncludes.h"

std::ostream& operator << (std::ostream& os, const ComplexNumbers& numbers);
std::istream& operator >> (std::istream& in, ComplexNumbers& numbers);

#endif


