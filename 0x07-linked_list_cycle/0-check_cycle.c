#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int check_cycle(listint_t *list)
{
    if (list == NULL)
        return 0;
    listint_t *ptr;
    ptr = list->next;
    while (ptr != NULL && ptr != list)
        return (1);
}
