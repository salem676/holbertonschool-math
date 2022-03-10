/*
* Filename: 8-complex.c
* Author: salem676.
* Date: 3/9/2022
*/
#include "holberton.h"
#include <math.h>
/**
 * complex_from_mod_arg - update complex.
 * @m: double.
 * @arg: double.
 * @c3: complex.
 * Description: updates complex number with arg and norm.
 * Return: void.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	double a;
	double b;
	/**
	 * @a: stores real part.
	 * @b: stores img part.
	 */
	a = sin(arg) * m;
	b = cos(arg) * m;
	c3->re = b;
	c3->im = a;
}
