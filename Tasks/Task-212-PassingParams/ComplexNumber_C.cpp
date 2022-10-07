#include "mbed.h"
#include "ComplexNumber_C.hpp"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + %f j\n", strName, u.real, u.imag);
}

ComplexNumber_C complexConjugate(const ComplexNumber_C a){
    ComplexNumber_C t;
    t.imag = -a.imag;
    return  t;
}

ComplexNumber_C complexNegate(const ComplexNumber_C a){
    ComplexNumber_C t;
    t.imag = -a.imag;
    t.real = -a.real;
    return  t;
}

ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b){
    ComplexNumber_C t = complexNegate(b);
    t = complexAdd(a, t);
    return t;
}

int complexMagnitude(const ComplexNumber_C a){
    int mag = sqrt(a.imag*a.imag + a.real * a.real);
    return mag;
}

ComplexNumber_C complexMultiply(const ComplexNumber_C a, const ComplexNumber_C b){
    ComplexNumber_C t;
    t.real = (a.real * b.real) - (a.imag * b.imag);
    t.imag = (a.real * b.imag) - (a.imag * b.real);
    return t;

}

ComplexNumber_C complexDivide(const ComplexNumber_C a, const ComplexNumber_C b){
    ComplexNumber_C t;
    
    return t;
}

void complexConjugateInplace(ComplexNumber_C& u) {
    u.imag = -u.imag;
    printf("%s = %f + %f j\n", "in place conjugation", u.real, u.imag);
}

void complexNegateInplace(ComplexNumber_C& u) {
    u.imag = -u.imag;
    u.real = -u.real;
    printf("%s = %f + %f j\n", "in place negation", u.real, u.imag);
}

