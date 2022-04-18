/*
* Filename: cosh.c
* Author: salem676.
*/
#include <math.h>
#include <stdlib.h>
/**
* main - executes hyp cosine plotting.
* Description: 
* Return: void.
*/
int system(const char *command);

int main(void)
{
	system("gnuplot> load 'cosh.txt'");
	return (0);	
}
