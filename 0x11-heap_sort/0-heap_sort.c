#include "sort.h"


/**
 * heapify - ..........
 * @array: ..........
 * @size: ..........
 * @i: ..........
 * @total_size: ..........
 */
void heapify(int *array, size_t size, size_t i, size_t total_size)
{
	size_t largest = i;
	size_t left = 2 * i + 1;
	size_t right = 2 * i + 2;

	if (left < size && array[left] > array[largest])
		largest = left;

	if (right < size && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{
		int temp = array[i];
		array[i] = array[largest];
		array[largest] = temp;
		print_array(array, total_size);
		heapify(array, size, largest, total_size);
	}
}


/**
 * heap_sort - ..........
 * @array: ..........
 * @size: ..........
 */
void heap_sort(int *array, size_t size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);

	for (int i = size - 1; i > 0; i--)
	{
		int temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);
		heapify(array, i, 0, size);
	}
}
