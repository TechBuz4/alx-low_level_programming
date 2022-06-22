#include "main.h"
/**
 *  test - tests if wildcard is a proper match
 *   @a: string
 *    @b: string
 *     @i: string
 *      @j: string
 *       Return: spot that matches or NULL
 */

char *test(char *a, char *b, char *i, char *j)

{

	if (*b == '*' || (*a == '\0' && *b == '\0'))

		return (i);

	else if (*a != *b)

		return (wildcard(a, b));

	else

		return (test(a + 1, b + 1, i, j));

}

/**
 * wildcard - checks for the wildcards
 * @k: string
 * @l: string
 * Return: pointer to spot in s3 that matches s4
 */

char *wildcard(char *k, char *l)

{

	if (*k != *l)

	{

		if (*k == '\0')

			return (0);

		return (wildcard(k + 1, l));

	}

	return (test(k + 1, l + 1, k, l));

}



/**
 * wildcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)

{

	char *p;

	if (*s2 == '*' && *(s2 + 1) == '\0')

		return (1);

	else if (*s2 == '*' && *(s2 + 1) == '*')

		return (wildcmp(s1, s2 + 1));

	else if (*s2 == '*')

	{

		p = wildcard(s1, s2 + 1);

		if (p == 0)

			return (0);

		return (wildcmp(p + 1, s2 + 2));

	}

	else if (*s1 != *s2)

		return (0);

	if (*s1 == '\0' && *s2 == '\0')

		return (1);

	return (wildcmp(s1 + 1, s2 + 1));

}
