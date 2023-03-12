#include "menger.h"
/**
 * menger - ...
 * @level: ...
 * Return: void
 */
void menger(int level)
{
    int sponge_size = pow(3, level);
    int row_idx, col_idx, print_symbol;

    if (level < 0)
        return;

    for (int i = 0; i < sponge_size; i++)
    {
        for (int j = 0; j < sponge_size; j++)
        {
            print_symbol = '#';
            row_idx = i; 
            col_idx = j; 

            while (row_idx || col_idx)
            {
                if (row_idx % 3 == 1 && col_idx % 3 == 1)
                    print_symbol = ' ';
                row_idx /= 3;
                col_idx /= 3;
            }
            putchar(print_symbol);
        }
        putchar('\n');
    }
}
