#include <stdlib.h>
#include <stdio.h>
/**
 * is_palindrome - checks a given unsigned integer is a palindrome or not.
 * @n: is the number to be checked
 * Return: return 1 if n is a palindrome, and 0 otherwise
*/

int is_palindrome(unsigned long n)
{
unsigned long r, sum = 0, temp;
temp = n;
while (n > 0)
{
r = n % 10;
sum = (sum * 10) + r;
n = n / 10;
}
if (temp == sum)
return (1);
else
return (0);
}
