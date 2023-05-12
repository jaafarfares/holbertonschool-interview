#include "sort.h"
/**
 * swap - ......
 * @a: ......
 * @b: ......
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * heap_sort - ......
 * @array: ......
 * @size: ......
 */
void heap_sort(int *array, size_t size)
{
    if (array == NULL || size <= 1) {
        return;
    }

    int i, a;

    a = (int)size - 1;
    for (a = (int)size - 1; a > 0; a--) {
        for (i = a; i >= 0; i--) {
            heapify(array, (int)size, i, a);
        }
        swap(&array[0], &array[a]);
        print_array((const int *)array, size);
    }
}

/**
 * heapify - ......
 * @array: ......
 * @size: ......
 * @parent: ......
 * @a: ......
 */
void heapify(int *array, int size, int parent, int a)
{
    int l, r;

    l = (parent * 2) + 1;
    r = (parent * 2) + 2;
    if (parent < 0 || parent >= size - 1) {
        return;
    }
    if (r <= a &&
        (array[r] >= array[l] && array[r] > array[parent])) {
        swap(&array[parent], &array[r]);
        print_array((const int *)array, (size_t)size);
        heapify(array, size, r, a);
    }
    if ((l <= a &&
         (r > a || array[l] > array[r])) &&
        array[l] > array[parent]) {
        swap(&array[parent], &array[l]);
        print_array((const int *)array, (size_t)size);
        heapify(array, size, l, a);
    }
}

