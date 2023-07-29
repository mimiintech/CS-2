/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 6
Description: Basic input/output
Input: User/keyboard variables
Output: Display outputting variables
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <string>
#include "complex.h"
// complex are not allowed
using namespace std;
// ******************************************
// ******************************************
// ******************************************
// Default constructor
Complex::Complex()
{
// a = real component
// b = imaginary component
    a = 0;
    b = 0;
}
// Parametrized constructor
Complex::Complex(double re, double im)
{
    a = re;
    b = im;
}
// ******************************************
// ******************************************
// ******************************************
// Getter functions
double Complex::real() const
{
    return a;
}
double Complex::imag() const
{
    return b;
}
// ******************************************
// ******************************************
// ******************************************
// Setter functions
void Complex::setReal(double re)
{
    a = re;
}
void Complex::setImag(double im)
{
    b = im;
}
// ******************************************
// ******************************************
// ******************************************
// Miscellaneous functions
void Complex::conj()
{
    // update the value “in place” on the object
    b = -b;
}
double Complex::abs() const
{
    return sqrt(a * a 
    + b * b);
    // absolute value of the complex number
}
double Complex::arg() const
{
    return atan2(b, a);
    // std::atan2(b, a)
}
// ******************************************
// ******************************************
// ******************************************
// overloaded addition operator
Complex Complex::operator+(const Complex &otherC)
{
    Complex sum;
// create a new variable
    sum.a = a + otherC.a;
    sum.b = b + otherC.b;
    return sum;
}
// ******************************************
// ******************************************
// ******************************************
// overloaded addition operator,
Complex Complex::operator+(double d)
{
    Complex sum;
    // create a new variable
    sum.a = a + d;
    sum.b = b;
    return sum;
}
// ******************************************
// ******************************************
// ******************************************
// overloaded subtraction operator
Complex Complex::operator-(const Complex &otherC)
{
    Complex sub;
    // create a new variable
    sub.a = a - otherC.a;
    sub.b = b - otherC.b;
    return sub;
}
// ******************************************
// ******************************************
// ******************************************
// overloaded subtraction operator
Complex Complex::operator-(double d)
{
    Complex sub;
    // create a new variable
    sub.a = a - d;
    sub.b = b;
    return sub;
}
// ******************************************
// ******************************************
// ******************************************
// overloaded multiplication operator
Complex Complex::operator*(const Complex &otherC)
{
    Complex comNum;
    // return the product of the 
    // two complex numbers
    comNum.a = a * 
    otherC.a - b * 
    otherC.b;
    comNum.b = a * 
    otherC.b + b * 
    otherC.a;
    return comNum;
}
// ******************************************
// ******************************************
// ******************************************
// overloaded multiplication operator
Complex Complex::operator*(double d)
{
    Complex comReal;
    // complex number and a real number
    comReal.a = a * d;
    comReal.b = b * d;
    return comReal;
}
//  overloaded division operator
Complex Complex::operator/(const Complex &otherC)
{
    Complex end;
    double denom = otherC.a * 
    otherC.a + otherC.b * 
    otherC.b;
    end.a = (a * otherC.a 
    + b * 
    otherC.b) / denom;
    end.b = (b * otherC.a - a *
     otherC.b) / denom;
    return end;
}

// overloaded division operator
Complex Complex::operator/(double d)
{
    Complex end;
    end.a = a / d;
    end.b = b / d;
    return end;
}
// overloaded equality operator
bool Complex::operator==(const Complex &otherC)
{
    // two numbers are within 0.01 (1e-2) of each other
    return (std::abs(a - otherC.a) < 0.01 
    && std::abs(b - otherC.b) < 0.01);
}
//  overloaded inequality operator
bool Complex::operator!=(const Complex &otherC)
{
    // compute the logical inverse of the equality operator
    return !(*this == otherC);
}
// friend functions
// overloads the
// stream extraction operator 
ostream & operator<<(ostream &out, const Complex &c)
{
    if (c.b >= 0)
        out << 
        c.a << 
        "+" << 
        c.b << 
        "i";
    else
        out << 
        c.a << 
        c.b << 
        "i";
    return out;
}

// Overloads the
// stream insertion operator 
istream & operator>>(istream &in, Complex &c)
{
    in >> 
    c.a >> 
    c.b;
    return in;
}

// Complex conjugate function
Complex conj(const Complex &c)
{
    Complex conj(c.a,
     -c.b);
    return conj;
}

// Overloads the addition
// operator 
Complex operator+(double d, const Complex &c)
{
    Complex add(c.a 
    + d, c.b);
    return add;
}

// Overloads the
// subtraction operator 
Complex operator-(double d, const Complex &c)
{
    Complex sub(d -
     c.a, -c.b);
    return sub;
}

// Overloads the
// multiplication operator 
Complex operator*(double d, const Complex &c)
{
    Complex multi(d 
    * c.a, 
    d * c.b);
    return multi;
}

// overloads the division
// operator 
Complex operator/(double d, const Complex &c)
{
    Complex denom(c.a 
    * c.a + c.b 
    * c.b, 0);
    Complex num(d * c.a, 
    -d * c.b);
    Complex div = num 
    / denom;
    return div;
}
