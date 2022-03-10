/*
* Filename: 3-argument.c
* Author: salem676.
* Date: 3/9/2022.
*/
#include "holberton.h"
#include <math.h>
/**
 * argument - return the argument.
 * @c: structure complex.
 * Description: returns argument of complex number.
 * Return: double a.
 */
double argument(complex c)
{
	double a;
	/**
	 * @a: argument to return.
	 */
	a = atan(c.im / c.re);
	return (a);
}
