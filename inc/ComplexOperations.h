#ifndef COMPLEX_OPERATIONS_H
#define COMPLEX_OPERATIONS_H
#include "AllIncludes.h"

template <typename T>
void MaximumModule(T NumberOne, T NumberTwo) {
    double numberOne = NumberOne.CalculaterModule();
    double numberTwo = NumberTwo.CalculaterModule();

    if (numberOne > numberTwo)
    {
        std::cout << "Module Number One = " << numberOne << std::endl;
        std::cout << "Module Number Two = " << numberTwo << std::endl;
        std::cout << "Module complex number one  > Module complex number two" << std::endl;
    }
    else if (numberOne < numberTwo) {
        std::cout << "Module Number One = " << numberOne << std::endl;
        std::cout << "Module Number Two = " << numberTwo << std::endl;
        std::cout << "Module complex number two > Module complex number one" << std::endl;
    }
    else {
        std::cout << "Module Number One = " << numberOne << std::endl;
        std::cout << "Module Number Two = " << numberTwo << std::endl;
        std::cout << "Module complex number one = Module complex number two" << std::endl;
    }
}

template <typename J>
void RadiusVector(J NumberOne, J NumberTwo) {
    double inverse = -1 * NumberTwo.GetB();
    NumberTwo.SetB(inverse); 
    J NumberThree = NumberOne * NumberTwo;   
    std::cout << NumberThree.GetA() << std::endl;
}

template <typename Q>
void SearchQuadrant(Q NumberOne) {
    double a = NumberOne.GetA();
    double b = NumberOne.GetB();

    if (a == 0 && b != 0) {
        std::cout << "Number on the Imaginary Axis" << std::endl; 
    } 
    else if (a != 0 && b == 0) {
        std::cout << "Number on the Real Axis" << std::endl; 
    }
    else if (a == 0 && b == 0) {
        std::cout << "Zero" << std::endl;
    }
    else if (a != 0 && b != 0) {
        if (a > 0 && b > 0) {
            std::cout << "First Quadrant" << std::endl;
        }
        else if (a < 0 && b > 0) {
            std::cout << "Two Quadrant" << std::endl;
        }
        else if (a < 0 && b < 0) {
            std::cout << "Three Quadrant" << std::endl;
        }
        else if (a > 0 && b < 0) {
            std::cout << "Four Quadrant" << std::endl;
        }
    }
}

#endif
