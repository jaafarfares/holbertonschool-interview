#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
* insert_node - ....
* @head: ....
* @number: ....
* Return: always 0.
*
*/


listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (*head == NULL || new->n <= (*head)->n)
	{
		new->next = current;
		current = new;
		return (new);
	}
	else
	{
		current = *head;
		while (current->next != NULL && current->next->n < number)
			current = current->next;
	}
	new->next = current;
	current->next = new;
	return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
