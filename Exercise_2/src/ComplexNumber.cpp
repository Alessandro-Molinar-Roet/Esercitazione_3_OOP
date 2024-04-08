#include "ComplexNumber.hpp"
#include<iostream>
#include<math.h>

namespace Complex {

ostream& operator<<(ostream& os, const ComplexNumber &r)
{
    if (r.imaginary == 0.0){
        os << r.real;} // es: 2
    else if (r.imaginary >0.0){
        if (r.real == 0){
            if (r.imaginary == 1){
                os << "i";} // es: i
            else{
                os << r.imaginary << "i";}} // es: 2i
        else{
            if (r.imaginary == 1){
                os << r.real << "+" << "i";} // es: 2+i
            else{
                os << r.real << "+" << r.imaginary << "i";}}} // es: 1+2i

    else if (r.imaginary < 0.0){
        if (r.real == 0){
            if (r.imaginary == -1){
                os << "-i";} // es: -i
            else{
                os << r.imaginary << "i";}} // es: -2i
        else{
            if (r.imaginary == -1){
                os << r.real << "-i";} // es: 2-i
            else{
                os << r.real << r.imaginary << "i";}}} // es: 1-2i
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1,const ComplexNumber &c2)
{
    ComplexNumber c(c1.real+c2.real, c1.imaginary+c2.imaginary);
    return c;
}

bool operator == (const ComplexNumber &c1, const ComplexNumber &c2)
{
    double tol = 10e-300; //tolleranza fissata
    double real_diff = abs(c1.real-c2.real);
    double imag_diff = abs(c1.imaginary-c2.imaginary);
    if(real_diff <= tol && imag_diff <= tol)
        return true;
    else
        return false;
}

ComplexNumber cogniugato(const ComplexNumber &c)
{
    ComplexNumber cog(c.real,-c.imaginary);
    return cog;
}

}
