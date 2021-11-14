#include "holberton.h"

/**
 * Division - Return the multiplication
 * @c1: complex
 * @c2: complex
 * @c3: complex pointer
 * Return: c3
 */

void division(complex c1, complex c2, complex *c3)
{
double a = c2.im;  
c2.im *= -1;
c3->re = ((c1.re * c2.re) - (c1.im * c2.im)) / ((c2.re * c2.re) - (a * c2.im));
c3->im = ((c1.re * c2.im) + (c1.im * c2.re)) / ((c2.re * c2.re) - (a * c2.im));
}
