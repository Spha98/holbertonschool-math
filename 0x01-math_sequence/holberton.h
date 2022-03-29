#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct complex - Structure
 */

typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
void addition(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif
