#include "holberton.h"

/**
 * addition - Return the additio
 * @c1: complex
 * @c2: complex
 * @c3: complex pointer
 * Return: c3
 */

void addition(complex c1, complex c2, complex *c3)
{
c3->re = c1.re + c2.re;
c3->im = c1.im + c2.im;
}
