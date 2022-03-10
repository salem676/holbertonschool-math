/*
* Filename: 1-conjugate.c
* Author: salem676
* Date: 3/9/2022
*/
#include "holberton.h"
#include <stdio.h>
/**
* conjugate - return the conjugate.
* @c: structure complex.
* Description: returns conjugate of complex number.
* Return: complex number.
*/
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
