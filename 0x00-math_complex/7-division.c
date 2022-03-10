/*
* Filename: 7-division.c
* Author: salem676.
* Date: 3/9/2022.
*/
#include "holberton.h"
#include <math.h>
/**
 * division - returns the division.
 * @c1: complex.
 * @c2: complex.
 * @c3: complex pointer.
 * Description: divides two complex numbers and stores in direction.
 * Return: void.
 */
void division(complex c1, complex c2, complex *c3)
{
	double a = c1.re;
	double b = c1.im;
	double c = c2.re;
	double d = c2.im;
	/**
	 * @a: real part for c1, @c: real part for c2.
	 * @b: img part for c1, @d: img part for c2.
	 */
	c3->re = ((a * c) + (b * d)) / (pow(c, 2) + pow(d, 2));
	c3->im = ((b * c) - (a * d)) / (pow(c, 2) + pow(d, 2));
}
