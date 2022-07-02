#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return: always 0 (sSuccess)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	if (n > 5)
	{
		printf("greater than 5 ");
	}
	else if (n == 0)
	{
		printf("0");
	}
	else
	{
		printf("less than 6 and not 0");
	}

	printf("/n");

	return (0);
}
