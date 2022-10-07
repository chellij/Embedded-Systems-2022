#ifndef __ComplexNumber_C__
#define __ComplexNumber_C__

typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

extern ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b);
extern void complexDisplay(const char *strName, const ComplexNumber_C u);
extern ComplexNumber_C complexConjugate(const ComplexNumber_C a);
extern ComplexNumber_C complexNegate(const ComplexNumber_C a);
extern ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b);
extern int complexMagnitude(const ComplexNumber_C a);
extern ComplexNumber_C complexMultiply(const ComplexNumber_C a, const ComplexNumber_C b);
extern ComplexNumber_C complexDivide(const ComplexNumber_C a, const ComplexNumber_C b);
extern void complexConjugateInplace(ComplexNumber_C& u);
extern void complexNegateInplace(ComplexNumber_C& u);

#endif