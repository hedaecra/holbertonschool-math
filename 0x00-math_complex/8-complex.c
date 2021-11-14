#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg - update complex
 * @m: double
 * @arg: double
 * @c3: complex
 * Return: void
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
c3->re = cos(arg) * m;
c3->im = sin(arg) * m;
}  
