#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers followed by a new line
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments
 * Return:If one the number of arguments is not exactly one 
 *         otherwise return 0
 */
int main(int argc, char *argv[])
{

	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
