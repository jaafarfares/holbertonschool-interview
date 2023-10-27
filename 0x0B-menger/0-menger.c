#include "menger.h"
#include <stdio.h>
#include <math.h>

/**
 * menger - ............
 * @level: ............
 */
void menger(int level)
{
	int i, j, n, row_idx, col_idx, symbol;

	n = pow(3, level); 
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
		{
			symbol = '#';
			row_idx = i;
			col_idx = j; 
			while (row_idx || col_idx)
			{
				if (row_idx % 3 == 1 && col_idx % 3 == 1) 
					symbol = ' ';
				row_idx /= 3;
				col_idx /= 3;
			}
			putchar(symbol); 
		}
		putchar('\n');
	}
}
