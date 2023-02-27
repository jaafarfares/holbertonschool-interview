#include "slide_line.h"

/**
 * slide_line - .....
 * @line: .......
 * @size: .....
 * @direction: .....
 * Return: ........
 */
int slide_line(int *line, size_t size, int direction)
{
int i, j, k, tmp;
int merged[size];

if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
return (0);

for (i = 0, j = 0; i < (int)size; i++)
{
if (line[i] != 0)
{
if (direction == SLIDE_RIGHT)
merged[j++] = line[i];
else
merged[j--] = line[i];
}
}

for (i = 0, k = 0; i < j && k < (int)size; i++)
{
if (merged[i] == merged[i + 1])
{
merged[k++] = merged[i] * 2;
i++;
}
else
merged[k++] = merged[i];
}

while (k < (int)size)
merged[k++] = 0;

if (direction == SLIDE_RIGHT)
{
for (i = 0; i < (int)size / 2; i++)
{
tmp = merged[i];
merged[i] = merged[size - i - 1];
merged[size - i - 1] = tmp;
}
}

for (i = 0; i < (int)size; i++)
line[i] = merged[i];

return (1);
}
