#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - .....
 * @parent: ....
 * @value: ....
 * Return: ....
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (tmp == NULL || parent == NULL)
	{
		return (NULL);
	}

	tmp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	tmp->left = tmp->right = NULL;
	tmp->n = value;
	tmp->parent = parent;
	return (tmp);
}
