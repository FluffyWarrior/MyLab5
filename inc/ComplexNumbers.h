#ifndef COMPLEX_NUMBERS_H
#define COMPLEX_NUMBERS_H

class ComplexNumbers
{
//Fields
private:
    double A; 
    double B;
//Methods and Constructors
public:
    //Default Constructor
    ComplexNumbers();

    //Fully Copy Constructor 
    ComplexNumbers(double a, double b);

    //Constructor copy
    ComplexNumbers(const ComplexNumbers& other);

    //Destructor
    ~ComplexNumbers();

    //Calculate module
    double CalculaterModule();

    //Operations
    ComplexNumbers operator + (const ComplexNumbers& numberTwo) const;
    
    ComplexNumbers& operator += (const ComplexNumbers& numberTwo);
    
    ComplexNumbers operator * (const ComplexNumbers& numbersTwo) const;
    
    ComplexNumbers& operator*=(const ComplexNumbers& numbersTwo); 

    ComplexNumbers& operator = (const ComplexNumbers& numbersTwo); 

    //Prefix
    ComplexNumbers& operator ++();
    //Postfix
    ComplexNumbers& operator ++(int);

//Getters and Setters
public:
    //Getters
    double GetA() const;
    double GetB() const;

    //Setters
    void SetA(double value);
    void SetB(double value); 
};

#endif
