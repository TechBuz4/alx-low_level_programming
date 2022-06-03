#include <stdlib.h>

#include <time.h>
/**
 * main - entry point
 * Return: 0
 * Description: return positive or negative or zero when number is generated
 */

int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)

{
	printf("%d is positive\n", n);

}

else if (n < 0)

{

	printf("%d is negative\n", n);

}

else

{
	printf(&n, "%d is zero\n");

}
					return (0);


}
