#include <stdlib.h>
#include "binary_trees.h"

void swap(int *x, int *y){
	int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * heap_insert - .....
 * @root: ....
 * @value: ....
 * Return: ....
 *
 */


heap_t *heap_insert(heap_t **root, int value)
{
    while (root->n < value)
    {
        swap(&root, )
    }
    
    
}
