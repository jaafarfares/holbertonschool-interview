#include "menger.h"
/**
 * menger - ...
 * @level: ...
 * Return: void
 */
void menger(int level)
{
int size = pow(3, level);

if (level < 0)
return;
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
int x = i, y = j;
while (x || y)
{
if (x % 3 == 1 && y % 3 == 1)
{
putchar(' ');
break;
}
x /= 3;
y /= 3;
}
if (x == 0 && y == 0)
putchar('#');
}
putchar('\n');
}
}
