#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply 2 variable suplied at command line
 * @argc: number of actual argument supplied
 * @argv: pointer to the argument supplied
 *
 * Return: success
 *
 * Created by: Justrotimi
 * cc: 23rd July, 2022
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

				exit(EXIT_SUCCESS);
}
