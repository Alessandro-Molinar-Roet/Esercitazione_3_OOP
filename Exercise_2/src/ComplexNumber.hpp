#pragma once

#include <iostream>

using namespace std;

namespace Complex {

// classe dei numeri complessi
class ComplexNumber
{
    public:
    double real;
    double imaginary;

    ComplexNumber() = default;
    ComplexNumber(double a, double b)
    {
        real = a;
        imaginary = b;
    }
};

// opeatore di stampa
ostream& operator <<(ostream& os, const ComplexNumber&r);

// operatore di somma
ComplexNumber operator+(const  ComplexNumber &c1, const ComplexNumber &c2);

// operatore di ugualgianza, restituisce 1 se numeri uguali, 0 se diversi
bool operator == (const  ComplexNumber &c1, const ComplexNumber &c2);

// funzione che prende un numero complesso e restituisce il cogniugato
ComplexNumber cogniugato(const ComplexNumber &c);


}
