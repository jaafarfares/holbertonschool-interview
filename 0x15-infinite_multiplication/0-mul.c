#include "holberton.h"

/**
 * _puts - ....
 * @s: ...
 * Return: ....
 */
void _puts(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		puts(s + 1);
	}
}
/**
 * err_message - ....
 * @s: ....
 * Return: ....
 */
void err_message(char *s)
{
	_puts(s);
	exit(98);
}
/**
 * _isdigit - ......
 * @s: .....
 * Return: ....
 */
int _isdigit(char *s)
{
	int i, digit = 0;

	for (i = 0; s[i] && !digit; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			digit++;
	}
	return (digit);
}
/**
 * operations - ...
 * @num1: ......
 * @num2: .....
 * @len1: ....
 * @len2: ...
 * Return: ....
 */
char *operations(char *num1, char *num2, int len1, int len2)
{
	char *result = NULL;
	int i, j, carry, len_total = (len1 + len2);

	result = malloc(sizeof(char) * len_total);
	if (!result)
		err_message("Error");
	for (i = 0; i < len_total; i++)
		result[i] = '0';
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (num1[i] - '0') * (num2[j] - '0');
			carry += result[i + j + 1] - '0';
			result[i + j + 1] = (carry % 10) + '0';
			carry /= 10;
		}
		if (carry)
			result[i + j + 1] = (carry % 10) + '0';
	}
	return (result);
}
/**
 * main - .....
 * @av: ......
 * @ac: ...
 * Return: ...
 */
int main(int ac, char **av)
{
	int len1 = 0, len2 = 0;
	char *num1 = av[1], *num2 = av[2], *result = NULL;

	if (ac != 3 || _isdigit(num1) || _isdigit(num2))
		err_message("Error");
	if (av[1][0] == 48 || av[2][0] == 48)
		_puts("0"), exit(0);

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = operations(num1, num2, len1, len2);
	if (result[0] == '0')
		_puts(result + 1);
	else
		_puts(result);
	free(result);
	return (0);
}
