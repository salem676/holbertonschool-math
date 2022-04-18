/*
* Filename: tanh.c
* Author: salem676.
*/
#include <math.h>
#include <stdlib.h>
/**
* main - executes hyp tan plotting.
* Description: 
* Return: void.
*/
int system(const char *command);

int main(void)
{
	system("gnuplot> load 'tanh.txt'");
	return (0);	
}
