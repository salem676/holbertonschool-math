/*
* Filename: cos.c
* Author: salem676.
*/
#include <math.h>
#include <stdlib.h>
/**
* main - executes cosine plotting.
* Description: 
* Return: void.
*/
int system(const char *command);

int main(void)
{
	system("gnuplot> load 'cos.txt'");
	return (0);	
}
