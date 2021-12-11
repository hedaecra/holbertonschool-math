#include <stdio.h>
#include <math.h>
#include "rectangle.h"

/**
 * rectangle_method - rectangle_method
 * @a: double
 * @b: double
 * @steps: int
 * Return: double
 */

double rectangle_method(double a, double b, int steps)
{

int i;
double width, height, sum, w;

width = (b - a) / steps;
sum = 0.0;
w = a;

for (i = 1; i <= steps; i++)
{
height = 1 / (1 + (w *w));
sum += width *height;
w += width;
}

return (sum);
}
