/*
* Filename: sinh.c
* Author: salem676.
*/
#include <math.h>
#include <stdlib.h>
/**
* main - executes hyp sine plotting.
* Description: 
* Return: void.
*/
int system(const char *command);

int main(void)
{
	system("gnuplot> load 'sinh.txt'");
	return (0);	
}
