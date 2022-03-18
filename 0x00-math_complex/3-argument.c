/*
* 3-argument.c - Modulus of complex
* Author: Ernest Mqcina
* Date: March 18, 2022
*/

#include "holberton.h"
#include <math.h>

/**
* argument - return the argument
* @c: structure complex
* Return: double a
*/

double argument(complex c)
{
double a;
a = atan(c.im / c.re);
return (a);
}
