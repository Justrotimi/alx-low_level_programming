#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: stored values in a string
 * @needle: hidden values in a string
 *
 * Return: void
 */
char *strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[b])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
