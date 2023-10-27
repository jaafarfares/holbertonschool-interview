#include "menger.h"
#include <stdio.h>
#include <math.h>

/**
 * menger - ............
 * @level: ............
 */
void menger(int level)
{
	int r, c, n, j, i, s;

	n = pow(3, level);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			s = '#';
			r = i;
		 c = j;
			while (r || c)
			{
				if (r % 3 == 1 && c % 3 == 1)
					s = ' ';
				r /= 3;
			 c /= 3;
			}
			putchar(s);
		}
		putchar('\n');
	}
}
