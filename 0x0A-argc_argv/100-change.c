#include <stdio.h>
#include <stdlib.h>

void isnegative(int);
/**
 * main - print minimum number of coin needed to change money
 * @argc: number of combined line parameters passed
 * @argv: pointer to the parameter passed
 *
 * Return: 0 if successs
 */
int main(int argc, char *argv[])
{
	int count = 0, money;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	money = atoi
