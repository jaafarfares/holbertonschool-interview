#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - function to check if the list is palinrome.
 * @head: pointer to the first node
 * Return: 1 if list is palindrom return 0 otherwise
 */

int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int len = 0;
	int arr[1024];

	while (current != NULL)
	{
		arr[len] = current->n;
		current = current->next;
		len++;
	}

	for (int i = 0; i < len / 2; i++)
	{
		if (arr[i] != arr[len - 1 - i])
			return (0);
	}

	return (1);
}
