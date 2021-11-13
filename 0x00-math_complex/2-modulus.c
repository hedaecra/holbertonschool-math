#include "holberton.h"
#include <math.h>

/**
 * Double module - return the modul
 * @c: structure complex
 * Return c
 */

double modulus(complex c)
{
double mod;

mod = sqrt(pow(c.re, 2) + pow(c.im, 2));
return (mod);
}
