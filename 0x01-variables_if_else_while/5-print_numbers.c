#include<stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		if (n < 10)
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
