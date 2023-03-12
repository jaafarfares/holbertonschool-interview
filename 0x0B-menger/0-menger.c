#include <stdio.h>
#include <math.h>
#include "menger.h"
/**
 * menger- ....
 * @level: ...
 * Return: ...
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
            int x = i, y = j;

            while (x || y)
            {
                if (x % 3 == 1 && y % 3 == 1)
                    break;
                x /= 3;
                y /= 3;
            }

            printf("%c", x || y ? ' ' : '#');
        }

        printf("\n");
    }
}
