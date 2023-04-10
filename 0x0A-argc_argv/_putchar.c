#include <stdio.h>
#include "main.h"
/**
 * _putchar - this is the function to execute the print out
 * @c: character to be printed
 *
 * Return: always 1 (succes)
 * and -1 is (not success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
