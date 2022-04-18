/*
* Filename: tan.c
* Author: salem676.
*/
#include <math.h>
#include <stdlib.h>
/**
* main - executes tangent plotting.
* Description: 
* Return: void.
*/
int system(const char *command);

int main(void)
{
	system("gnuplot> load 'tan.txt'");
	return (0);	
}
