#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
