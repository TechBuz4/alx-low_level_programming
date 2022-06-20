#include "main.h"
/**
 * _strstr - locates a substring
 * Return:0
 * @needle: a string
 * @haystack: a string
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (i);
		}
		needle = j;
		i++;
		haystack = i;
	}
	return (0);
}




