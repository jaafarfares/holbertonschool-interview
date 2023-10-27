#include "menger.h"
#include <stdio.h>
#include <math.h>

/**
 * menger - ............
 * @level: ............
 */
void menger(int level)
{
	if (level < 0)
		return;

	int size = pow(3, level);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			drawMenger(size, level, i, j);
		}
		printf("\n");
	}
}

/**
 * drawMenger - ............
 * @size: ............
 * @level: ............
 * @x: ............
 * @y: ............
 */
void drawMenger(int size, int level, int x, int y)
{
	if (level == 0)
	{
		printf("#");
	}
	else
	{
		int step = size / 3;
		int center = size / 3;

		if (x >= center && x < center * 2 && y >= center && y < center * 2)
		{
			printf(" ");
		}
		else
		{
			drawMenger(step, level - 1, x % center, y % center);
		}
	}
}
