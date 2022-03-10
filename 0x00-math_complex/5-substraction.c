/*
* Filename: 5-substraction.c
* Author: salem676.
* Date: 3/9/2022.
*/
#include "holberton.h"
#include <math.h>
/**
 * substraction - return the substraction.
 * @c1: complex.
 * @c2: complex.
 * @c3: complex pointer.
 * Description: substracts two complex numbers and assigns
 * to pointer.
 * Return: void.
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
