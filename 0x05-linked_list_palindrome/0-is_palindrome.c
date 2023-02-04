#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - function to check if the list is a palindrome.
 * @head: Pointer to the head of the linked list.
 * Return: 1 if the linked list is a palindrome, 0 otherwise.
 */

int is_palindrome(listint_t **head)
{
	listint_t *current = *head, *sec = *head;
	int len = 0;
	int arr[1024];

	if (*head == NULL)
		return (1);
	while (sec != NULL && sec->next != NULL)
	{
		arr[len] = current->n;
		current = current->next;
		sec = sec->next->next;
		len++;
	}
	if (current != NULL)
		sec = current->next;
	while (current != NULL)
	{
		len--;
		if (arr[len] != current->n)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}
