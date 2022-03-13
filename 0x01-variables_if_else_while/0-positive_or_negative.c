#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point 
 *
 * Return: Always zero (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n>0) {;
		printf("is positive");}
	else {
		if (n=0){;
		printf("is zero");}
		else {;
		printf("is negative\n");}
	}
	return (0);
}
