#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * swap - .....
 * @node1: .....
 * @node2: .....
 */
void swap(heap_t *node1, heap_t *node2)
{
    int tmp = node1->n;
    node1->n = node2->n;
    node2->n = tmp;
}

/**
 * heapify_down - .....
 * @root: .....
 */
void heapify_down(heap_t *root)
{
    heap_t *largest = root->left;

    if (root->right && root->right->n > largest->n)
        largest = root->right;

    if (largest && largest->n > root->n)
    {
        swap(root, largest);
        heapify_down(largest);
    }
}

/**
 * get_last_node - .....
 * @root: .....
 *
 * Return: .....
 */
heap_t *get_last_node(heap_t *root)
{
    if (root == NULL)
        return NULL;

    int size = 0, i;
    heap_t **queue = malloc(sizeof(heap_t *) * size);
    heap_t *current = NULL, *last_node = NULL;

    if (queue == NULL)
        return NULL;

    queue[size++] = root;

    for (i = 0; i < size; i++)
    {
        current = queue[i];
        last_node = current;

        if (current->left)
            queue = realloc(queue, sizeof(heap_t *) * (++size));

        if (current->left)
            queue[size - 1] = current->left;

        if (current->right)
            queue = realloc(queue, sizeof(heap_t *) * (++size));

        if (current->right)
            queue[size - 1] = current->right;
    }

    free(queue);
    return last_node;
}

/**
 * heap_extract - .....
 * @root: .....
 *
 * Return: .....
 */
int heap_extract(heap_t **root)
{
    if (root == NULL || *root == NULL)
        return 0;

    int value = (*root)->n;
    heap_t *last_node = get_last_node(*root);

    if (*root == last_node)
    {
        free(*root);
        *root = NULL;
        return value;
    }

    (*root)->n = last_node->n;

    if (last_node->parent->left == last_node)
        last_node->parent->left = NULL;
    else
        last_node->parent->right = NULL;

    free(last_node);

    heapify_down(*root);

    return value;
}
