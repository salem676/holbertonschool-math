/*
* Filename: 2-modulus.c
* Author: salem676.
* Date: 3/9/2022
*/
#include "holberton.h"
#include <math.h>
/**
* modulus - return the modulus.
* @c: structure complex.
* Description: returns modulus of given complex number.
* Return: double value of modulus.
*/
double modulus(complex c)
{
	double mod;
	/**
	 * @mod: variable to return.
	 */
	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (mod);
}
