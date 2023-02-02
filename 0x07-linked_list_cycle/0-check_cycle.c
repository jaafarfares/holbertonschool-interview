#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - check the code for Holberton School students.
 *@list: .......
 * Return: Always 0.
 */

int check_cycle(listint_t *list)
{

    listint_t *ptr;
    ptr = list->next;
    while (ptr != NULL && ptr != list)
        return (1);
    return 0;
}
