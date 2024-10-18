#include "AllIncludes.h"


ComplexNumbers::ComplexNumbers()
{
	SetA(1.0); 
	SetB(1.0);
}

ComplexNumbers::ComplexNumbers(double a, double b)
{
	SetA(a);
	SetB(b);
}

ComplexNumbers::ComplexNumbers(const ComplexNumbers& other) : A(other.A), B(other.B) {}

ComplexNumbers::~ComplexNumbers()
{
	std::cout << "Object destroyed" << std::endl;
}

double ComplexNumbers::GetA() const
{
	return A;
}

double ComplexNumbers::GetB() const
{
	return B;
}

void ComplexNumbers::SetA(double value)
{
	A = value;
}

void ComplexNumbers::SetB(double value)
{
	B = value;
}

double ComplexNumbers::CalculaterModule()
{
	return sqrt(pow(GetA(), 2.0) + pow(GetB(), 2.0));
}

ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers& numberTwo) const
{
	double real = GetA() + numberTwo.GetA();
	double imagine = GetB() + numberTwo.GetB();
	return ComplexNumbers(real, imagine);
}

ComplexNumbers& ComplexNumbers::operator+=(const ComplexNumbers& numberTwo)
{
	double real = GetA() + numberTwo.GetA();
	double imagine = GetB() + numberTwo.GetB();
	SetA(real); 
	SetB(imagine); 
	return *this;
}

ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers& numbersTwo) const
{
	double real = GetA() * numbersTwo.GetA(); 
	double imageOne = GetA() * numbersTwo.GetB(); 
	double imageTwo = GetB() * numbersTwo.GetA(); 
	double imageThree = GetB() * numbersTwo.GetB() * (-1);
	double unityImage = imageOne + imageTwo; 
	double unityReal = real + imageThree; 

	A == unityReal;

	return ComplexNumbers(unityReal, unityImage); 
}

ComplexNumbers& ComplexNumbers::operator*=(const ComplexNumbers& numbersTwo)
{
	double real = GetA() * numbersTwo.GetA();
	double imageOne = GetA() * numbersTwo.GetB();
	double imageTwo = GetB() * numbersTwo.GetA();
	double imageThree = GetB() * numbersTwo.GetB() * (-1);
	
	double unityImage = imageOne + imageTwo;
	double unityReal = real + imageThree;

	SetA(unityReal); 
	SetB(unityImage); 
	return *this;
}

ComplexNumbers& ComplexNumbers::operator=(const ComplexNumbers& numbersTwo)
{
	if (&numbersTwo != this)
	{
		SetA(numbersTwo.GetA());
		SetB(numbersTwo.GetB());
	}
	return *this;
}

ComplexNumbers& ComplexNumbers::operator++()
{
	SetA(GetA() + 1);
	return *this;
}

ComplexNumbers& ComplexNumbers::operator++(int)
{
	SetA(GetA() + 1);
	return *this;
}