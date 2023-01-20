#include "lists.h"

/**
 * is_palindrome - function to check a linked list is a palindrome.
 *@head: ......
 * Return: int.
 */
void reverse()
{
    if (head == NULL)
    {
        return;
    }
    struct listint_t* temp = head;
    struct listint_t* new_head = NULL;
 
    // create new nodes and insert them beginning
    while (temp != NULL)
    {
        struct node* new_node = add_nodeint_end(temp->n);
        new_node->next = new_head;
        new_head = new_node;
        temp = temp->next;
    }
 
    // update the head with the new head
    head = new_head;
}

int is_palindrome(listint_t **head)
{
	listint_t *p, *q, *second_s, first_s;
	p = head;
	q = head;




	if (p->next == NULL)
	{
		return (1);
	}


	while (1)
	{
		p = p->next->next;

		if (p == NULL)
		{
			second_s = q->next;
			break;
		}

		if (p->next == NULL)
		{
			second_s = q->next->next;
			break;
		}
		q= q->next;
	}
	q->next = NULL;
	second_s = reverse(second_s);

	first_s = head;
	while(first_s!= NULL && second_s != NULL)
	{
		if(first_start->n == second_start->n)
		{
			first_s = first_s->next;
			seconde_s = second_s->next;
		}
		else
		{
			return(0);
		}

	}
	return (1);







}
