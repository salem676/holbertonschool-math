#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
/**
 * struct complex - structure made for complex numbers. 
 */

typedef struct complex
{
	double re;
	double im;
} complex;
  
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif /* MAIN_H */