#include "mbed.h"
#include "ComplexNumber_C.hpp"

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
 
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);

    ComplexNumber_C e = complexConjugate(p);
    complexDisplay("conjugated: ", e);
    
    ComplexNumber_C f = complexNegate(p);
    complexDisplay("negate", f);

    ComplexNumber_C g = complexSubtract(p, q);
    complexDisplay("subtract", g);

    ComplexNumber_C h = complexMultiply(p, q);
    complexDisplay("multiply", h);

    complexConjugateInplace(p);
    p.real = 2;
    p.imag = 3;
    complexNegateInplace(p);

    int mag = complexMagnitude(e);

    while(true){
        printf("magnitude = %d\n", mag);
        return 0;
    }
}
