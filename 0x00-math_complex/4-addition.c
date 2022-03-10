/*
* Filename: 4-addition.c
* Author: salem676.
* Date: 3/9/2022.
*/
#include "holberton.h"
#include <math.h>
/**
* addition - return the addition of complex.
* @c1: complex.
* @c2: complex.
* @c3: complex pointer.
* Description: makes addition of two complex numbers
* operation assigned to pointer.
* Return: void.
*/
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
