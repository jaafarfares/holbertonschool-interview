#  C Palindrome integer




### function that checks whether or not a given unsigned integer is a palindrome.





## Usage

```

Jaafar@~/0x08-palindrome_integer$ cat 0-main.c 
#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
    unsigned long n;
    int ret;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s arg\n", av[0]);
        return (EXIT_FAILURE);
    }

    n = (unsigned long)(atol(av[1]));
    ret = is_palindrome(n);

    printf("%lu is ", n);
    if (ret == 0)
        printf("not ");
    printf("a palindrome.\n");

    return (EXIT_SUCCESS);
}
Jaafar@~/0x08-palindrome_integer$ gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c
Jaafar@~/0x08-palindrome_integer$ ./palindrome 1
1 is a palindrome.
Jaafar@~/0x08-palindrome_integer$ ./palindrome 11
11 is a palindrome.
Jaafar@~/0x08-palindrome_integer$ ./palindrome 112
112 is not a palindrome.
Jaafar@~/0x08-palindrome_integer$ ./palindrome 121
121 is a palindrome.
Jaafar@~/0x08-palindrome_integer$ ./palindrome 12345678987654321
12345678987654321 is a palindrome.
Jaafar@~/0x08-palindrome_integer$ ./palindrome 123456789987654321
123456789987654321 is a palindrome.
Jaafar@~/0x08-palindrome_integer$ ./palindrome 1234567898654321
1234567898654321 is not a palindrome.
Jaafar@~/0x08-palindrome_integer$

```

## Made by [Jaafar Fares](https://github.com/jaafarfares) for [Holberton School](https://www.holbertonschool.com/)
