#include "euler.h"
#define f1(x,y)(y)
#define f2(x,y)(-sin(x))
/**
 * Euler - method to find numerical sol. of ODE.
 * via Euler's method.
 * @euler: initial archive containing function and init. points.
 * @name: of archive.
 * @x0: initial dep. var. point .
 * @y0: initial indp. var. point .
 * @T: represents period for pendulum.
 * @n: iterations for process.
 * Description: as above.
 * Return: void.
 */
void Euler(FILE *euler, char *name, double x0, double y0, double T, int n)
{
	double h = 2 * T / n;
	int i;
	double yn, xn;
	double slope_y, slope_x;
	/*
	 * Variables for calculation of
	 * Euler's two dim. method.
	 */
	euler = fopen(name, "w");
	fprintf(euler, "%f\t%f\n", x0, y0);
	for (i = 0; i < n; i++)
	{
		slope_x = f1(x0, y0);
		slope_y = f2(x0, y0);
		yn = y0 + h * slope_y;
		xn = x0 + h * slope_x;
		fprintf(euler, "%f\t%f\n", xn, yn);
		y0 = yn;
		x0 = xn;
	}
	fclose(euler);
}
