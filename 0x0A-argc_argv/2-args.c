#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of arguments passed to main
 * @argc: number of actual parameter passed to main
 * @argv: pointer to the first element pssed to main
 *
 * Return: success
 * created by: Justrotimi
 * cc: 23rd July. 2022
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	exit(EXIT_SUCCESS);
}
