#include "holberton.h"

/**
 * substraction - Return the substraction
 * @c1: complex
 * @c2: complex
 * @c3: complex pointer
 * Return: c3
 */

void substraction(complex c1, complex c2, complex *c3)
{
c3->re = c1.re - c2.re;
c3->im = c1.im - c2.im;
}
