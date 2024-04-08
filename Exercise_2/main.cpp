#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;


int main()
{
    // Classe numeri complessi
    Complex::ComplexNumber c(-2,-2);
    Complex::ComplexNumber i(0,-2);

    // Mostra tutte le possibili configurazioni di stampa
    cout << "printing test" << endl;
    for (int counter = 0; counter < 5; ++counter)
    {
        cout << c << "  ";
        if (i.imaginary != 0)
            cout << i << "  ";
        c.imaginary = ++c.imaginary;
        c.real = ++c.real;
        i.imaginary  = ++i.imaginary;
    }

    // Test di somma
    cout << "\n\nsum test" << endl;
    Complex::ComplexNumber a(3,2);
    Complex::ComplexNumber b(-1,2);
    Complex::ComplexNumber s = a+b;
    cout << s << "\n";


    // Test uguaglianza
    Complex::ComplexNumber r(1./3.,2./3.);
    Complex::ComplexNumber t(1,2);
    cout << "\nequality test (True=1 False=0)" << endl;
    bool b1 = Complex::operator==((r+r+r),t);
    bool b2 = (c==i);
    a.real = a.real - 4;
    bool b3 = a==b;
    cout << r+r+r << " == " << t << ": " << b1 << "\n";
    cout << c << " == " << i << ": " << b2 << "\n";
    cout << a << " == " << b << ": " << b3 << "\n";


    //Test cogniugato
    cout << "\nconjugate test" << endl;
    Complex::ComplexNumber cog1 = Complex::cogniugato(i);
    Complex::ComplexNumber cog2 = Complex::cogniugato(c);
    cout << cog1 << " is the conjugate of " << i << "\n";
    cout << cog2 << " is the conjugate of " << c << "\n";

}
