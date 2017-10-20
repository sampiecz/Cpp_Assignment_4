#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <ostream>
#include <istream>
using std::istream;
using std::ostream;
using std::cin;
using std::endl;
using std::cout;

class Complex 
{    
    // I get by with help from my friends
    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(istream&, Complex&);

    // Data members
    private:
        double realComplex;
        double imaginaryComplex;
 
    // Methods Prototypes
    public:
        // Constructor
        Complex();
        Complex(double newReal, double newImaginary);
       
        // Complex
        void setComplex(double, double);
        void getComplex(double&, double&) const; 
       
        // Real
        void setRealPart(double);
        double getRealPart() const;

        // Imaginary
        void setImaginaryPart(double);
        double getImaginaryPart() const;

        // Operators
        Complex operator+(const Complex&) const;
        Complex operator*(const Complex&) const;
        bool operator==(const Complex&) const;

};

#endif
