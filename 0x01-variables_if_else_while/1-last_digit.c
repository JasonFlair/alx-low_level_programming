#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("Last digit of %d" "is %d" "and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("Last digit of %d" "is %d" "and is 0\n");
	}
	else
	{
		printf("Last digit of %d" "is %d" "and is less than 5\n");
	}
	return (0);
}
