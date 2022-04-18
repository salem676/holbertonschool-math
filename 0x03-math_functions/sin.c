/*
* Filename: sin.c
* Author: salem676.
*/
#include <math.h>
#include <stdlib.h>
/**
* main - executes sine plotting.
* Description: 
* Return: void.
*/
int system(const char *command);

int main(void)
{
	system("gnuplot> load 'sin.txt'");
	return (0);	
}
